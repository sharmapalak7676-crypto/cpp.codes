#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

class B : public A {
};

class C : public A {
};

class D : public B, public C {
};

int main() {
    D obj;

    // obj.show(); // ERROR: Ambiguous

    obj.B::show(); // accessing via B
    obj.C::show(); // accessing via C

    return 0;
}