#include <iostream>
#include <string>

#include "calc.h"

using namespace std;
int main() {
  Calc calc;

  while (true) {
    std::cout << "> ";

    std::string token;
    std::cin >> token;

    if (token.empty()) break;

    

    calc.input(token);

    std::cout << calc.get() << "\n";
    

  }

  // 3 * 4  -->  3 4 *

  // 1 - 2 - 3  -->  

  // (4+2)*(3-7)  -->  4 2 + 3 7 - *

  //

  return 0;
}