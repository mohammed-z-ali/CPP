// find is to find the substing of a string

#include <iostream>
#include <string>
using namespace std;

int main(){
    string text = "Hello, I am Milu";
    string to_replace = "Milu";
    string replace = "Mohammed";

    size_t position = text.find(to_replace); // position is the position of the replacing substring

    if(position != string::npos){
        cout << "Replacement found at : " << position;
    }
    else cout << "Replaement not found";


}