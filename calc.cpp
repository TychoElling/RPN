#include <functional>
#include "calc.h"
#include <string>
#include <iostream>
using namespace std;

void Calc::input(string item){
    if (osa1.count(item)){
        double a = stack.top();
        stack.pop();
        stack.push(osa1[item](a));
    }
    else if (osa2.count(item)){
        double b = stack.top();
        stack.pop();
        double a = stack.top();
        stack.pop();
        stack.push(osa2[item](a,b));
    }
    else if (lg == 1){
        lg = 0;
        stack.push(getv(item));        
    }
    else if (ls == 1){
        ls = 0;
        double value = stack.top();
        stack.pop();
        setv(item, value);
    }
    else if (item == "set"){
        ls = 1;
    }
    else if (item == "get"){
        lg = 1;
    }
    else{
        stack.push(stod(item));
    }
}

double Calc::get (){return  stack.top();}

void Calc::add_function_a1 (string o, function<double(double)> of){
    osa1[o] = of;
}

void Calc::add_function_a2(string o,  function<double(double,double)> of){
    osa2[o] = of;
}
