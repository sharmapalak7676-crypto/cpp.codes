#include<iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() {
        cout << "Vehicle starts\n";
    }
};

class Car : public Vehicle {
public:
    void start() {
        cout << "Car starts with key\n";
    }
};

class Bike : public Vehicle {
public:
    void start() {
        cout << "Bike starts with button\n";
    }
};

int main() {
    Vehicle* v;
    Car c;
    Bike b;

    v = &c;
    v->start();

    v = &b;
    v->start();
}