#include <iostream>
using namespace std;

class Shape {
public:
    void display() {
        cout << "This is a shape" << endl;
    }
};

class Rectangle : public Shape {
public:
    void areaRect() {
        cout << "Rectangle area formula: l*b" << endl;
    }
};

class Circle : public Shape {
public:
    void areaCircle() {
        cout << "Circle area formula: pi*r*r" << endl;
    }
};

int main() {
    Rectangle r;
    Circle c;

    r.display();
    r.areaRect();

    c.display();
    c.areaCircle();

    return 0;
}