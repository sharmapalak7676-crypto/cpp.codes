#include<iostream>
using namespace std;

class Vehicle {
public:
    virtual void mileage() {
        cout << "Base mileage\n";
    }
};

class Car : public Vehicle {
public:
    void mileage() {
        cout << "Car mileage: 15km/l\n";
    }
};

class Bike : public Vehicle {
public:
    void mileage() {
        cout << "Bike mileage: 40km/l\n";
    }
};

int main() {
    Vehicle* v;
    Car c;
    Bike b;

    v = &c;
    v->mileage();

    v = &b;
    v->mileage();
}