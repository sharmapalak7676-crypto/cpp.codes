#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Student : public Person {
public:
    int marks;

    void getMarks() {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.getName();
    s.getMarks();
    s.display();
    return 0;
}