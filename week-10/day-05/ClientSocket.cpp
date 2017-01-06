#include "ClientSocket.h"

// Static constants
const std::string  ClientSocket::SERVER_NOT_FULL           = "OK";        // Server's response when there are free spots a client can join
const std::string  ClientSocket::SERVER_FULL               = "FULL";      // Server's response when there are no free spots, so a client cannot join
const std::string  ClientSocket::SHUTDOWN_SIGNAL           = "/shutdown"; // What you type to shutdown the server
const std::string  ClientSocket::QUIT_SIGNAL               = "/quit";     // What you type to shutdown the client
const unsigned int ClientSocket::CONNECTION_TIMEOUT_PERIOD = 5000;        // 5 second connection timeout
const unsigned int ClientSocket::SOCKET_SET_POLL_PERIOD    = 10;          // 10ms, so poll 100 times/second

// Define termios structures to switch & swap terminal input modes
struct termios orig_termios;
struct termios new_termios;

// ClientSocket constructor
ClientSocket::ClientSocket(string theServerAddress, unsigned int theServerPort, unsigned int theBufferSize)
{
  debug          = false;     // Flag to control whether to output debug info
  shutdownClient = false;     // Flag to control whether it's time to shut down the client

  serverHostname = theServerAddress;

  serverPort = theServerPort; // The port on the server to connect to
  bufferSize = theBufferSize; // The maximum message size

  inputLength = 0;

  try
  {
    pBuffer = new char[bufferSize]; // Create the transmission buffer character array

    // Create a socket set big enough to hold the server socket and our own client socket
    socketSet = SDLNet_AllocSocketSet(2);

    // If we couldn't create the socket set then throw an exception
    if (socketSet == NULL)
    {
      string msg = "Failed to allocate the socket set in ClientSocket constructor: ";
      msg += SDLNet_GetError();

      SocketException e(msg);
      throw e;
    }
  }
  catch (SocketException e)
  {
    // Re-throw the exception to be dealt with appropriately elsewhere
    throw e;
  }

} // End of ClientSocket constructor

// ClientSocket destructor
ClientSocket::~ClientSocket()
{
  // Close our server and client sockets
  SDLNet_TCP_Close(serverSocket);
  SDLNet_TCP_Close(clientSocket);

  // Free our socket set (i.e. all the clients in our socket set)
  SDLNet_FreeSocketSet(socketSet);

  // Release any properties on the heap
  delete pBuffer;
}

void ClientSocket::connectToServer()
{
  // Try to resolve the hostname to an IP address, if it's already an IP address then that's fine
  // If successful, this places the connection details in the serverIP object.
  int hostResolved = SDLNet_ResolveHost(&serverIP, serverHostname.c_str(), serverPort);

  // If we couldn't resolve the hostname then throw an error
  if (hostResolved == -1)
  {
    string msg = "Error: Failed to resolve the server hostname to an IP address.";

    SocketException e(msg);
    throw e;
  }
  else // otherwise if we successfully resolved the hostname...
  {
    // ...get our IP address in dot-quad format by breaking up the 32-bit unsigned host address
    // and splitting it into an array of four 8-bit unsigned numbers...
    Uint8 * dotQuad = (Uint8*)&serverIP.host;

    dotQuadString  = toString( (unsigned short)dotQuad[0] );
    dotQuadString += ".";
    dotQuadString += toString( (unsigned short)dotQuad[1] );
    dotQuadString += ".";
    dotQuadString += toString( (unsigned short)dotQuad[2] );
    dotQuadString += ".";
    dotQuadString += toString( (unsigned short)dotQuad[3] );

    //... and then outputting them. Then read the last 16 bits of the serverIP object to get the port number
    if (debug)
    {
      cout << "Successfully resolved server to IP: " << dotQuadString;
      cout << ", will use port " << SDLNet_Read16(&serverIP.port) << endl;

      // Try to resolve the hostname from the IP address, just for kicks
      const char *pHostname;
      if (!(pHostname = SDLNet_ResolveIP(&serverIP)))
      {
        cout << "Failed to resolve the server IP to hostname: " << SDLNet_GetError() << endl;
        cout << "Attempting to continue as we have a (technically) valid IP address..." << endl;
      }
      else
      {
        serverHostname = toString(pHostname);
        cout << "Successfully resolved IP to hostname: " << serverHostname << endl;
      }
    }
  }

  // Try to open a connection between the client and the server - quit out if we can't connect
  clientSocket = SDLNet_TCP_Open(&serverIP);
  if (!clientSocket)
  {
    string msg = "Error: Failed to open connection to server: ";
    msg += SDLNet_GetError();

    SocketException e(msg);
    throw e;
  }
  else // If we successfully opened a connection then check for the server response to our connection
  {
    if (debug) { cout << "Connection okay, about to read connection status from the server..." << endl; }

    // Add our socket to the socket set for polling
    SDLNet_TCP_AddSocket(socketSet, clientSocket);

    // Wait for up to five seconds for a response from the server.
    // Note: If we don't check the socket set and WAIT for the response, we'll be checking before the
    // server can respond, and it'll look as if the server sent us nothing back!
    int activeSockets = SDLNet_CheckSockets(socketSet, ClientSocket::CONNECTION_TIMEOUT_PERIOD);

    if (debug)
    {
      cout << "There are " << activeSockets << " socket(s) with data on them at the moment." << endl;
    }

    // Check if we got a response from the server
    int gotServerResponse = SDLNet_SocketReady(clientSocket);

    if (gotServerResponse != 0)
    {
      // Read the message on the client socket
      int serverResponseByteCount = SDLNet_TCP_Recv(clientSocket, pBuffer, bufferSize);

      if (debug)
      {
        cout << "Message from server: " << pBuffer << "(" << serverResponseByteCount << " bytes)" << endl;
      }

      // Get the contents of the buffer as a string
      string bufferContents = pBuffer;

      // If we got the SERVER_NOT_FULL response from the server then we can join!
      if ( pBuffer == ClientSocket::SERVER_NOT_FULL )
      {
        if (debug) { cout << "Joining server now..." << endl; }
      }
      else // Otherwise we must have got the SERVER_FULL response so we can't.
      {
        string msg = "Error: Server is full...";

        SocketException e(msg);
        throw e;
      }
    }
    else // If there's no activity on the client socket then we've failed to connect
    {
      string msg = "Error: No response from server: ";
      msg       += serverHostname;
      msg       += " at IP: ";
      msg       += dotQuadString;
      msg       += " on port ";
      msg       += serverIP.port;

      SocketException e(msg);
      throw e;
    }

  } // End of if we managed to open a connection to the server condition
}

// Function to check for any incoming messages
char* ClientSocket::checkForIncomingMessages() {
  string receivedMessage = "";
  int activeSockets = SDLNet_CheckSockets(socketSet, ClientSocket::SOCKET_SET_POLL_PERIOD);
  if (activeSockets != 0) {
    int gotMessage = SDLNet_SocketReady(clientSocket);
    if (gotMessage != 0) {
      int serverResponseByteCount = SDLNet_TCP_Recv(clientSocket, pBuffer, bufferSize);
      if (serverResponseByteCount != 0) {
        receivedMessage = toString(pBuffer);
      }
      else {
        string msg = "Lost connection to the server!";
        SocketException e(msg);
        throw e;
      }
    }
  }
  return pBuffer;
}

// Function do display a received message and then blank the message
void ClientSocket::displayMessage(string &receivedMessage) {
  cout << endl << "Received: " << receivedMessage << endl;
  receivedMessage = "";
}

// Function to display the prompt + any user input that hasn't been sent yet
void ClientSocket::displayPrompt() {
  cout << "Write something >>> " << getCurrentUserInputContents();
  fflush(stdout);
}

// Function to reset the terminal to blocking mode
void ClientSocket::resetTerminalMode() {
  tcsetattr(0, TCSANOW, &orig_termios);
}

// Set the terminal mode to conio mode
void ClientSocket::setConioTerminalMode()
{
  // Take two copies - one for now, one for later
  tcgetattr(0, &orig_termios);
  memcpy(&new_termios, &orig_termios, sizeof(new_termios));

  cfmakeraw(&new_termios);
  tcsetattr(0, TCSANOW, &new_termios);
}

// Fuction to check if a key has been pressed
int ClientSocket::ClientSocket::kbHit()
{
  // How long to wait for input
  // Note: As soon as we get input the wait is immediately over - so it's not like our typing rate is limited in any way!
  long waitSeconds      = 1L;
  long waitMicroSeconds = 0L;
  struct timeval tv = { waitSeconds, waitMicroSeconds };

  // Create a file descriptor set
  fd_set fds;

  FD_SET(0, &fds);
  return select(1, &fds, NULL, NULL, &tv);
}

// Function to read the contents of the keypress
int ClientSocket::ClientSocket::getch()
{
  int r;
  unsigned char c;
  if ((r = read(0, &c, sizeof(c))) < 0)
  {
    //cout << "About to return a number..." << endl;
    return r;
  }
  else
  {
    //cout << "About to return a character..." << endl;
    return c;
  }
}

// Function to get user input in a non-blocking manner
void ClientSocket::getUserInput(int x, int y) {
  char coordinates[2];
  coordinates[0] = (char)x;
  coordinates[1] = (char)y;
  if (coordinates[0] != 'q') {
    SDLNet_TCP_Send(clientSocket, coordinates, 2);
  }
}

// Function to return the contents of any user input (prior to it being sent)
// Used to keep what we've typed so far displayed at the prompt when receiving incoming messages
string ClientSocket::getCurrentUserInputContents()
{
  return userInput;
}

// Function to return the shutdownStatus, used by our main loop
bool ClientSocket::getShutdownStatus()
{
  return shutdownClient;
}
