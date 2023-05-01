// it is C-style function found in C-style library.
// it is also known as C-style string

// it is to concatenate string

// it takes two arguments 

// include cstring 

// -----    PROTOTYPE ------- char *strcat(char *destination, const char *source)

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char destination[30] = "Hello, "; // make it large enough so that source file can be fitted.
    const char *source = "World";

    strcat(destination, source);

    cout << "Concatenated string : " << destination << endl;

}