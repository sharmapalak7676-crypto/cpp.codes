#include<iostream>
using namespace std;

class Bill {
private:
    int units;
    float amount;

public:
    void input() {
        cout << "Enter units: ";
        cin >> units;
    }

    void calculate() {
        if(units <= 100)
            amount = units * 1.5;
        else
            amount = units * 2;
    }

    void display() {
        cout << "Bill: " << amount;
    }
};

int main() {
    Bill b;
    b.input();
    b.calculate();
    b.display();
}