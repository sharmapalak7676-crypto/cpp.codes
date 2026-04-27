#include <iostream>
using namespace std;

class Student {
    int id;
    string name;

public:
    Student() {
        id = 0;
        name = "Default";
    }

    Student(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << id << " " << name << endl;
    }
};

int main() {
    Student s1;
    Student s2(101, "Palak");

    s1.display();
    s2.display();

    return 0;
}