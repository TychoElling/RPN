#include "calc.h"
#include <string>
#include <iostream>
using namespace std;
void Calc::input(string item){
    if (item == "*"){
        double a = stack.top();
        stack.pop();
        double b = stack.top();
        stack.pop();
        stack.push(a*b);
    }
    else if (item == "+"){
        double a = stack.top();
        stack.pop();
        double b = stack.top();
        stack.pop();
        stack.push(a+b);
    }
    else if (item == "-"){
        double b = stack.top();
        stack.pop();
        double a = stack.top();
        stack.pop();
        stack.push(a-b);
    }
    else if (item == "/"){
        double b = stack.top();
        stack.pop();
        double a = stack.top();
        stack.pop();
        stack.push(a/b);
    }
    else{
        double newi = std::stod(item);
        stack.push(newi);
    }

}


double Calc::get (){return  stack.top();}