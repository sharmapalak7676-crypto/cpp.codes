#include<iostream>
using namespace std;

class Employee {
protected:
    float salary;
};

class Increment : public Employee {
public:
    void input() {
        cout << "Enter salary: ";
        cin >> salary;
    }

    void update() {
        salary += salary * 0.2;
        cout << "New Salary: " << salary;
    }
};

int main() {
    Increment i;
    i.input();
    i.update();
}