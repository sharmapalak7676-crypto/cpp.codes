#include<iostream>
using namespace std;

class Transport {
public:
    virtual void fare() {
        cout << "Base fare\n";
    }
};

class Bus : public Transport {
public:
    void fare() {
        cout << "Bus fare: 50\n";
    }
};

class Train : public Transport {
public:
    void fare() {
        cout << "Train fare: 100\n";
    }
};

int main() {
    Transport* t;
    Bus b;
    Train tr;

    t = &b;
    t->fare();

    t = &tr;
    t->fare();
}