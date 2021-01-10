#include <functional>
#include <iterator>
#include <list>
#include <string>
#include <iostream>
using namespace std;

template <typename T>
class Stack {
    private:
        list<T> lst;
    public:
        void get(){
            return lst;
        }
        int length(){
            return lst.size();
        }
        bool empty(){   
            return bool(lst.size() == 0);
        }
        void push(const T &element){
            lst.push_front(element);
        }
        void pop(){
            lst.pop_front();
        }
        T& top (){
            return lst.front();
        }
        T& bottom (){
            return lst.back();
        }
        void pop_bottom(){
            lst.pop_back();
        }
};


class Calc {
    private:
        Stack<double> stack;
        unordered_map<string, function<double(double, double)>> osa2;
        unordered_map<string, function<double(double)>> osa1;
        unordered_map<string, int> arity;
        unordered_map<string, double> vars;
        int ls = 0;
        int lg = 0;
    public:
        void input(string item);
        double get();
        void add_function_a1(string o,  function<double(double)> of);
        void add_function_a2(string o,  function<double(double,double)> of);
        double getv (string vn){return vars[vn];}
        void setv (string n, double v){vars[n] = v;}
};