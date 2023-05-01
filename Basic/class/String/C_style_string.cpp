//string is a gorup of characters or a text / string is an array of characters.

// You fist need to understand how characters work and what actually characters are.

// characters and char data types

// string are immutatbe (unchanging)

// if you don't use the new keyword, dont use the delete keyword.

// in c++ there are two types of string: C-style (character array) and string class.
// C-style strings are arrays of characters that end with null character. they are inherited from C language and can be used in C++.

//This null character marks the end of a C-style string, and many string processing functions depend on the presence of this marker to do their work.


#include <iostream>
using namespace std;

int main(){
    char c_style_string [] = "Hello World"; //A C-style string

    cout << "A C-style string: " << c_style_string << endl;
    //cout << "The length of the c_style_strign is : " << c_style_string.length();
 
    char c_style_string2[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0'}; // this is a null sting 

    cout << "C-style string2: " << c_style_string2 << endl;

    //using a pointer
    char *s = "Hello"; //behave as a const char*
    //s[3] = "L";
    cout << s;



    return 0;
}