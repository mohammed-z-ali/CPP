// it is not the same as the virtual function.

// it has no implementation in the base class, but must be overriden by derived classes.

// it is considered as an abstract class, which means you cannot create an instance of it.

// it must be assigned to 0

// -----    PROTOTYPE   -------
// virtual ReturnType FunctionName(argumentrs) = 0;

#include <iostream>
using namespace std;

class Shape {
    public:
    virtual void draw() const = 0; // pure virtual functon
};

class Circle : public Shape{
    public:
    void draw() const override{
        cout << "The shape of the circle" << endl;
    }
};

class Triangle : public Shape{
    public:
    void draw() const override{
        cout << "The shape of a triangle" << endl;
    }
};

void draw_shape(const Shape &shape){
    shape.draw();
}

int main(){

    // Shape shape; // this will create an error becasue instance cannot be created of the pure virtual base function

    Circle circle;
    Triangle triangle;

    circle.draw();
    triangle.draw();

    return 0; 
}
