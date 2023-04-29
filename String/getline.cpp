#include <iostream>
using namespace std;


// unlike char, string object has no fixed length for taking user input. it can be anysize or can be extended. 
// it takes value using getline() method which takes two arguments. 
//first is : cin, second is: the name of the string.

int main()
{
    // Declaring a string object
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "You entered: " << str << endl;
    return 0;
}