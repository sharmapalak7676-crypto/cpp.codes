#include<iostream>
using namespace std;

class Employee {
protected:
    float salary;
};

class Bonus : public Employee {
public:
    void input() {
        cout << "Enter salary: ";
        cin >> salary;
    }

    void calculate() {
        cout << "Bonus: " << salary * 0.1;
    }
};

int main() {
    Bonus b;
    b.input();
    b.calculate();
}