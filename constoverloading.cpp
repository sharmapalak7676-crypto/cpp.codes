#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:

    // Constructor for square
    Rectangle(int l) {
        length = l;
        breadth = l;
    }

    // Constructor for rectangle
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void display() {
        cout << "Area = " << length * breadth << endl;
    }
};

int main() {

    Rectangle r1(6);      // Square
    Rectangle r2(6, 4);   // Rectangle

    r1.display();
    r2.display();

    return 0;
}
