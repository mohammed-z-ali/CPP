// it is a memebr of of base class.
// it is used to implement polymorphism, which is one of the core principle of the OOP.

// if you declare virtual in the base clasee, the derived classes can override the function with their own implementation. --> will be called at Runtime

#include <iostream>
using namespace std;

class Shape{

    public:
    virtual void draw() const{
        cout << "The shape of the draw" << endl;
    }

};

class Circle : public Shape{
    public:
    void draw() const override{
        cout << "The shape of the circle" << endl;
    }
};

class Square : public Shape {
    public:
    void draw() const override{
        cout << "The shape of a square" << endl;
    }
};

void draw_shape(const Shape &shape){
    shape.draw();
}

int main(){
    Circle circle;
    Square square;

    circle.draw();
    square.draw();

    return 0;

}

