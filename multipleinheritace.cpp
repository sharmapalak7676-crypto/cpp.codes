#include <iostream>
using namespace std;

class Father {
public:
    void fatherTrait() {
        cout << "Father: Hardworking" << endl;
    }
};

class Mother {
public:
    void motherTrait() {
        cout << "Mother: Caring" << endl;
    }
};

class Child : public Father, public Mother {
public:
    void show() {
        fatherTrait();
        motherTrait();
        cout << "Child: Smart" << endl;
    }
};

int main() {
    Child c;
    c.show();
    return 0;
}