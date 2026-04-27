#include<iostream>
using namespace std;

class College {
protected:
    string cname;
};

class Department : public College {
protected:
    string dname;
};

class Student : public Department {
public:
    void input() {
        cname = "Shoolini";
        dname = "CSE";
    }

    void display() {
        cout << cname << " " << dname;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
}