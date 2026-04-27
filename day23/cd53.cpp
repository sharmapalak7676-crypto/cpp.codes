#include<iostream>
using namespace std;

class Payment {
public:
    virtual void pay() = 0;
};

class Card : public Payment {
public:
    void pay() {
        cout << "Paid via Card\n";
    }
};

class UPI : public Payment {
public:
    void pay() {
        cout << "Paid via UPI\n";
    }
};

int main() {
    Payment* p;
    Card c;
    UPI u;

    p = &c;
    p->pay();

    p = &u;
    p->pay();
}