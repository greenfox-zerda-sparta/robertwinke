
#include <iostream>
#include <string>

using namespace std;

int main() {
	int g1 = 123;
	int g2 = 345;
	// tell if g1 is bigger than g2
  if (g1 > g2){
    std::cout << "g1 is bigger" << std::endl;
  }
  else if (g1 = g2){
    std::cout << "they are equal" << std::endl;
  }
  else {
    std::cout << "g2 is bigger" << std::endl;
  }
	return 0;
}
