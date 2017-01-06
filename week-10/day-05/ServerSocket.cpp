///*
// * ServerSocket.cpp
// *
// *  Created on: Jan 6, 2017
// *      Author: robertwinke
// */
//
//#include "ServerSocket.h"
//
//ServerSocket::ServerSocket() {
//  SDLNet_Init();
//  IPaddress ip;
//  SDLNet_ResolveHost(&ip, "127.0.0.1", 1234);
//  serverSocket = SDLNet_TCP_Open(&ip);
//}
//
//void ServerSocket::setCoordinates(int x, int y) {
//  coordinates[0] = (char)x;
//  coordinates[1] = (char)y;
//}
//void ServerSocket::sendCoordinatesToServer(int x, int y) {
//  setCoordinates(x, y);
//  SDLNet_TCP_Send(serverSocket, coordinates, 2);
//}
//ServerSocket::~ServerSocket() {
//  SDLNet_TCP_Close(serverSocket);
//  SDL_Quit();
//}
