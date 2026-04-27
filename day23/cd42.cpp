#include<iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "No area defined\n";
    }
};

class Rectangle : public Shape {
    int l, b;
public:
    Rectangle(int x, int y) {
        l = x; b = y;
    }
    void area() {
        cout << "Rectangle Area: " << l*b << endl;
    }
};

class Circle : public Shape {
    float r;
public:
    Circle(float x) {
        r = x;
    }
    void area() {
        cout << "Circle Area: " << 3.14*r*r << endl;
    }
};

int main() {
    Shape* s;
    Rectangle r(5,4);
    Circle c(3);

    s = &r;
    s->area();

    s = &c;
    s->area();
}