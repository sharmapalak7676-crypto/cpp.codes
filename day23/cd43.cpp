#include<iostream>
using namespace std;

class Person {
public:
    void show() {
        cout << "Person class\n";
    }
};

class Student : virtual public Person {};
class Employee : virtual public Person {};

class Manager : public Student, public Employee {};

int main() {
    Manager m;
    m.show();   // No ambiguity
}