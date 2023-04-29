#include <iostream>
#include<string>
using namespace std;

int main()
{
    char s1[10]="Hello"; //this works fine. doesn't complain about 10;
    cout<<s1<<endl;
    s1[0]='N';
    cout<<s1<<endl; // this changes the first character (H to N) from the s1

    s1[5]='B'; // those characters are added based on the index number --> up to 10 or [9] to the s1
    s1[6]='i';
    s1[7]='g';
    s1[8]='W';
    s1[9]='o';
//    s1[10]='r';
    cout<<s1<<endl;

    char s2[6]={'H','e','l','l','o'};
    cout<<"size:"<<sizeof(s2)<<endl; //size of the string is 6 as specified.
    cout<<s2<<endl;
    s2[1]='E'; // the e changes to E
    cout<<s2<<endl;

     char s[]={'H','e','l','l','o'};
     cout<<"size:"<<sizeof(s)<<endl; //size is 5 because it is not specified
     cout<<s<<endl;
    
  
    char *s3="Hello"; //similar as const char* if you have a pointer (T/F)
    cout<<s3<<endl;
    // s3[0]='n'; // can't be changed because s3 is a const variable
    // cout<<s3<<endl;
    // s3="BigWord"; // can't be changed becuse s3 is a const varibale.
    

    string s4="Hello";
    cout<<s4<<endl;
    cout<<&s4<<endl; // prints the address fo the s4
    s4[0]='n'; // changes the first value of s4 (H to n )
    cout<<s4<<endl; // Hello --> nello
    cout<<s4.size()<<endl;
    s4="BigWord"; // value changed to BigWord
    cout<<s4<<endl;
    cout<<s4.size()<<endl; // size is now 7
    cout<<&s4<<endl; // address is the same even after the value is changed

    //creating string in heap using character array
    char *str= new char[6];
    str[0] = 'h'; // Assign values to the character array
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    str[5] = '\0'; // Add null terminator to end of string
    cout<<str<<endl;
    delete[] str;

    //creating string in heap using string keyword
    string* str1 = new string("hello"); 
    cout<<*str1<<endl;
    delete str1;
    
}