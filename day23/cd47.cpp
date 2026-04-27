#include<iostream>
using namespace std;

class Product {
public:
    virtual void price() {
        cout << "Base price\n";
    }
};

class Electronics : public Product {
public:
    void price() {
        cout << "Electronics price with GST: 12000\n";
    }
};

class Clothes : public Product {
public:
    void price() {
        cout << "Clothes price with discount: 800\n";
    }
};

int main() {
    Product* p;
    Electronics e;
    Clothes c;

    p = &e;
    p->price();

    p = &c;
    p->price();
}