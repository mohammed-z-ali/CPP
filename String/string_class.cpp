// this is more versatile and safer string type. 
// it is part of the header and has several useful member for string manipulation.

// it is recommended to use sting over c-Style string because it is more safer and easy to use.

#include <iostream>
#include <string>
using namespace std;

int main(){

    string cpp_string = "Hello world";

    cout << "CPP strign: " << cpp_string << endl;

    // how to access each character of the string.
    char firstChar = cpp_string[0];
    cout << "First character of the cpp_string is: " << firstChar << endl;

    // get the length of the string
    size_t string_length = cpp_string.length();
    cout << "The length of the cpp_string is: " << string_length << endl;

    //Concatenate string
    string newString = ", You are learning CPP";
    string full_string = cpp_string + newString;

    cout << "The full concatenated string is : " << full_string << endl;


    return 0;

}