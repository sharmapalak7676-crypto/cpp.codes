#include<iostream>
using namespace std;

class Student {
protected:
    int marks;
};

class Result : public Student {
protected:
    string grade;
};

class Display : public Result {
public:
    void input() {
        cout << "Enter marks: ";
        cin >> marks;

        if(marks >= 75) grade = "A";
        else if(marks >= 50) grade = "B";
        else grade = "C";
    }

    void show() {
        cout << "Grade: " << grade;
    }
};

int main() {
    Display d;
    d.input();
    d.show();
}