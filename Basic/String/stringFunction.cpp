#include <iostream>
#include<cstring>
using namespace std;

int main(){
  char s[6]="Hello";
  cout<<strlen(s)<<endl;

  char s1[20]="Good";
  char s2[20]="Morning";
  strcat(s1,s2); //concatenation
  cout<<s1<<endl;

  strncat(s1,s2,5); //concatenate n chars
  cout<<s1<<endl;

  char s3[20]="Good";
  char s4[10]="";
  strcpy(s4,s3); //copy
  cout<<s4<<endl;

  char s9[20]="Fun";
  char s10[10]="";
   strncpy(s10,s9,2); //copy n chars
   cout<<s10<<endl;

  char s5[]="Programming";
  char s6[]="gram";
  cout<<strstr(s5,s6)<<endl; //find match
  //note: if s6="k", this will raise run time error

  cout<<strchr(s5,'m')<<endl; //occurance of char

  char s7[20]="hello";
  char s8[20]="Hello";
  cout<<strcmp(s8,s7)<<endl; //compare 
  
}