#include<iostream>
using namespace std;

class Shape {
public:
    virtual void volume() {
        cout << "No volume\n";
    }
};

class Cube : public Shape {
public:
    void volume() {
        cout << "Cube: " << 27 << endl;
    }
};

class Cylinder : public Shape {
public:
    void volume() {
        cout << "Cylinder: " << 314 << endl;
    }
};

int main() {
    Shape* s;
    Cube c;
    Cylinder cy;

    s = &c;
    s->volume();

    s = &cy;
    s->volume();
}