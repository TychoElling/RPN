#include <iostream>
#include <string>
#include "calc.h"
#include <functional>

double add(double a, double b){
    return a + b;
}

using namespace std;
int main() {
  Calc calc;
  std::function<double(double, double)> add_fn = add;
  calc.add_function_a2("+",add_fn);
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