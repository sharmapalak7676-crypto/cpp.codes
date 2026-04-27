#include<iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Person {
private:
    int marks[3];
    int total;
    float percentage;

public:
    void setMarks() {
        total = 0;
        cout << "Enter 3 subjects marks: ";
        for(int i=0;i<3;i++){
            cin >> marks[i];
            total += marks[i];
        }
        percentage = total / 3.0;
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nTotal: " << total;
        cout << "\nPercentage: " << percentage;

        if(percentage >= 75) cout << "\nGrade: A";
        else if(percentage >= 50) cout << "\nGrade: B";
        else cout << "\nGrade: C";
    }
};

int main() {
    Student s;
    s.setPerson("Palak", 20);
    s.setMarks();
    s.display();
}