#include<iostream>
using namespace std;

class Food {
public:
    virtual void order() {
        cout << "Ordering food\n";
    }
};

class Pizza : public Food {
public:
    void order() {
        cout << "Pizza ordered\n";
    }
};

class Burger : public Food {
public:
    void order() {
        cout << "Burger ordered\n";
    }
};

int main() {
    Food* f;
    Pizza p;
    Burger b;

    f = &p;
    f->order();

    f = &b;
    f->order();
}