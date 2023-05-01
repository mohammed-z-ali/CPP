// it is to iterate throug string

// there is two ways to iterate strings

#include <iostream>
#include <string>
using namespace std;

int main(){
    string text = "Hello world";

    // One way
    for(string::iterator it = text.begin(); it != text.end(); ++it){ // begin and end starts iterating from begining to the end
        cout << *it << ' ';
    }
    cout << endl;


    // Alternative way
    for(char c : text){
        cout << c << ' ';
    }
    cout << endl;
    return 0;
}