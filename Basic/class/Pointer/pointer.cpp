// pointer is an integer that holds the memory address. (period)
// it doesn't really need a type. (it can be any type.)

#include <iostream>
using namespace std;

int main(){

    int var = 8;
    //void* ptr = nullptr; // pointer is the * and we made it void(that doesn't return anything), and we assigned ptr a memory address of nullptr(which is 0)
    int* ptr = &var; // if we put the & before anything, we are essentially asking for the memory addess of that thing.
    *ptr = 10; // *ptr is deferencing the pointer and changes the value from 8 to 10
   
    cout << var;


}

