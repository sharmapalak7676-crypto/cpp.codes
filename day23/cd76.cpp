#include<iostream>
using namespace std;

class Employee {
protected:
    float salary;
};

class Payroll : public Employee {
public:
    void input() {
        cout << "Enter salary: ";
        cin >> salary;
    }

    void netSalary() {
        float tax = salary * 0.1;
        cout << "Net Salary: " << salary - tax;
    }
};

int main() {
    Payroll p;
    p.input();
    p.netSalary();
}