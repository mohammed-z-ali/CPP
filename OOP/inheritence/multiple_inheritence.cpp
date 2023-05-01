// multiple inheritence allows a class to inherti from more than one base class.
// it allows the derived class to inherit the functions and properties from multiple base classes.

#include <iostream>
using namespace std;

class Teacher {
    public:
    void teach(){
        cout << "Teachers teach" << endl;
    }
};
class Researcher {
    public:
    void research(){
        cout << "Researchers research" << endl;
    }
};

// derived class from multiple inheritence
class Professor : public Teacher, public Researcher{
    public:
    void advise(){
        cout << "Professors advise students" << endl;
    }
};

int main(){
    Professor prof;

    prof.advise(); 
    prof.research(); // inherited from researchers
    prof.teach(); // inherited from teachers

    return 0;
}