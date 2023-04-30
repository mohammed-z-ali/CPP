// this is to copy paste the string.
// it takes two argument (destination, source)
// it is a C-style string

#include <iostream>
#include <string>

using namespace std;

int main(){
    const char *source = "Hello world"; // 13 character. 14 including null terminator
    char destination[20]; // make it large enough so that it can hold the souce file. 
    // if the destination doesn't have enough space, it will give compiller error.

    strcpy(destination, source);


    cout << "Source : " << source << endl;
    cout << "Destinaiton : " << destination << endl;
}