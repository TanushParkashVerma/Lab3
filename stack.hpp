//
// Created by tanus on 2019-09-27.
//

#ifndef LAB3_STACK_HPP
#define LAB3_STACK_HPP

#define MAX_SIZE 10

#include <string>
#include <sstream>

using namespace std;

class Stack {

private:
    int array[MAX_SIZE];
    int top_;
public:
    /*default constructor initializes the index of the "top" to -1*/
    Stack();


    /*function called push which accepts an int and adds it to the top of the stack,
   returning true if it was added, else false*/
    bool push(int c);


    /* function called pop which accepts no parameters and return void and
     decrement the instance variable*/
    void pop();


    /*function called empty which accepts no parameters and returns true
     if the stack is empty, else false.*/
    bool empty() const;


    /*function called full which accepts no parameters and return true if
    the stack is full, else false.*/
    bool full() const;


    /*function called top which accepts no parameters and returns (without
    removing) the int on the "top" of the stack.*/
    int top() const;


    /*function called print which should print the contents of the stack*/
    string print();


};


#endif //LAB3_STACK_HPP
