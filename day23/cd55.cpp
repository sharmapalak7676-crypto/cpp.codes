#include<iostream>
using namespace std;

class Car {
private:
    int days;
    int cost;

public:
    void input() {
        cout << "Enter days: ";
        cin >> days;
    }

    void calculate() {
        cost = days * 500;
    }

    void display() {
        cout << "Total Cost: " << cost;
    }
};

int main() {
    Car c;
    c.input();
    c.calculate();
    c.display();
}