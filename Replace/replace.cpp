// this is to find the substring and replace with raplaceable string.


#include <iostream>
#include <string>
using namespace std;

int main(){
    string text = "Hello, I am Milu";
    string to_replace = "Milu";
    string replace = "Mohammed";

    cout << "Before modification, the string is : " << text << endl;

    size_t position = text.find(to_replace); // position is the position of the replacing substring

    if(position != string::npos){
        text.replace(position, to_replace.length(), replace);
    }
    cout << "Modified string : " << text << endl;
    return 0;


}