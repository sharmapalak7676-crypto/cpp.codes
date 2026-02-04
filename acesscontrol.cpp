//protected access control
#include <iostream>
using namespace std;

class Person {
protected:
    int age;
};

class Student : public Person {
public:
    void setAge(int a) {
        age = a;   
    }

    void showAge() {
        cout << "Age: " << age;
    }
};

int main() {
    Student s;
    s.setAge(20);
    s.showAge();

    

    return 0;
}
