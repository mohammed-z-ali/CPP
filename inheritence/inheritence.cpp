// allows to have a hierarchy of classes that relates to each other
// base class and allows us to create subclass from that branch
// it is kinda like a template
// a subclas can inherit the fucntionallity of the base class

// to inherit something, we have to call or put a "     : pulbic <BASE CLASS>       ".

#include <iostream>
#include <string>
using namespace std;

class BASE{
public:
    string name;
    int age;

    BASE set(string n, int a){
        this-> name = n;
        this-> age = a;
    }

    void display(){
        cout << "Name is : " << name << endl;
        cout << "Age is : " << age << endl;
    }
};

class Student : public BASE{
public:
    int grade;

    void set_grade(int g){
        grade = g;
    }

    void display_stuInfo(){
        display(); // calling the display method from the the BASE class.
        cout << "Grade is : " << grade << endl;
    }
};

int main(){
    Student student;
    student.set("Milu", 22);
    student.set_grade(100);
    student.display_stuInfo();
}
