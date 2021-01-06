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
    public:
        void input (string item);
        double get ();
};