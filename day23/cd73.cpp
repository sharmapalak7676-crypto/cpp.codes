#include<iostream>
using namespace std;

class Shape {
public:
    virtual void perimeter() {
        cout << "No perimeter\n";
    }
};

class Square : public Shape {
public:
    void perimeter() {
        cout << "Square: " << 4*5 << endl;
    }
};

class Rectangle : public Shape {
public:
    void perimeter() {
        cout << "Rectangle: " << 2*(4+6) << endl;
    }
};

int main() {
    Shape* s;
    Square sq;
    Rectangle r;

    s = &sq;
    s->perimeter();

    s = &r;
    s->perimeter();
}