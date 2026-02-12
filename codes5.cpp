#include <iostream>
using namespace std;

class student
{
    int rollno;
    int totalmarks;
    float percentage;
    char name[30];
    int marks[5];

public:
    void input();
    void calculate();
    void display();
};

void student::input()
{
    cout << "Enter roll number: ";
    cin >> rollno;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
}

void student::calculate()
{
    totalmarks = 0;
    for (int i = 0; i < 5; i++)
    {
        totalmarks += marks[i];
    }

    percentage = (totalmarks * 100.0) / 500;
}

void student::display()
{
    cout << "\n--- Student Result ---\n";
    cout << "Roll No: " << rollno << endl;
    cout << "Name: " << name << endl;
    cout << "Total Marks: " << totalmarks << endl;
    cout << "Percentage: " << percentage << "%\n";

    if (percentage >= 90)
        cout << "Grade: O\n";
    else if (percentage >= 80)
        cout << "Grade: A\n";
    else if (percentage >= 70)
        cout << "Grade: B\n";
    else if (percentage >= 60)
        cout << "Grade: C\n";
    else
        cout << "Grade: D\n";
}

int main()
{
    student s;

    s.input();        
    s.calculate();    
    s.display();      

    return 0;
}