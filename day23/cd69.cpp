#include<iostream>
using namespace std;

class Device {
public:
    virtual void start() {
        cout << "Device started\n";
    }
};

class TV : public Device {
public:
    void start() {
        cout << "TV ON\n";
    }
};

class AC : public Device {
public:
    void start() {
        cout << "AC ON\n";
    }
};

int main() {
    Device* d;
    TV t;
    AC a;

    d = &t;
    d->start();

    d = &a;
    d->start();
}