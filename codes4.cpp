//using class and object codes...
#include <iostream>
using namespace std;

class employee
{
    int id;
    char name[30];
    int basic, hra, da;
    int totalSalary;

public:
    void input();
    void calculate();
    void display();
};

void employee::input()
{
    cout << "Enter employee id: ";
    cin >> id;

    cout << "Enter employee name: ";
    cin >> name;

    cout << "Enter basic salary: ";
    cin >> basic;

    cout << "Enter HRA: ";
    cin >> hra;

    cout << "Enter DA: ";
    cin >> da;
}

void employee::calculate()
{
    totalSalary = basic + hra + da;
}

void employee::display()
{
    cout << "\n--- Employee Details ---\n";
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Total Salary: " << totalSalary << endl;
}

int main()
{
    employee e;

    e.input();       
    e.calculate();   
    e.display();    

    return 0;
}