//
// Created by tanus on 2019-09-27.
//

#include <iostream>
#include "stack.hpp"

using namespace std;

/*default constructor initializes the index of the "top" to -1*/
Stack::Stack() {
    top_ = -1;

}


/*function called push which accepts an int and adds it to the top of the stack,
   returning true if it was added, else false*/
bool Stack::push(int n) {
    if (top_ >= (MAX_SIZE - 1)) {
        return false;
    } else {
        array[++top_] = n;
        return true;
    }
}


/* function called pop which accepts no parameters and return void and
     decrement the instance variable*/
void Stack::pop() {
    top_--;

}


/*function called empty which accepts no parameters and returns true
    if the stack is empty, else false.*/
bool Stack::empty() const {
    return (top_ == -1);
}


/*function called full which accepts no parameters and return true if
    the stack is full, else false.*/
bool Stack::full() const {
    return (top_ == MAX_SIZE - 1);
}


/*function called top which accepts no parameters and returns (without
    removing) the int on the "top" of the stack.*/
int Stack::top() const {
    return array[top_];
}


/*function called print which should print the contents of the stack*/
string Stack::print() {
    stringstream x;
    x << "\nThe contents of the stack are:" << std::endl;
    if (!empty()) {
        while (!empty()) {
            x << top() << std::endl;
            pop();
        }
    } else {
        x << "NULL" << std::endl;
    }
    return x.str();

}
