#include<iostream>
using namespace std;

class Employee {
protected:
    int id;
    string name;
public:
    void getData() {
        cout << "Enter ID and Name: ";
        cin >> id >> name;
    }
};

class Salary : public Employee {
protected:
    float basic, hra, da;
public:
    void getSalary() {
        cout << "Enter Basic Salary: ";
        cin >> basic;
        hra = basic * 0.2;
        da = basic * 0.1;
    }
};

class TotalSalary : public Salary {
public:
    void display() {
        float total = basic + hra + da;
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nTotal Salary: " << total;
    }
};

int main() {
    TotalSalary emp;
    emp.getData();
    emp.getSalary();
    emp.display();
}