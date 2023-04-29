#include <iostream>
using namespace std;

int main()
{
    char str[100]; // use char with a big number
    
    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    cout << "\nEnter another string: ";
    cin >> str;
    cout << "You entered: "<<str<<endl;



    // read a line of text
    // to read a line containing blank space, cin.get() function can be used. this function takes two arguments.
    // first argument: name of the string. second argument: maximum size of the array.
    char str2[100];
    cout << "Enter a string: ";
    cin.get(str2, 100); // it reads the full line of the text including the blank space.

    cout << "You entered: " << str2 << endl;
    return 0;

}