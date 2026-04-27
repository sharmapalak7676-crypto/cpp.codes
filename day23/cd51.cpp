#include<iostream>
using namespace std;

class Patient {
protected:
    string name;
public:
    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Disease : public Patient {
protected:
    string disease;
public:
    void getDisease() {
        cout << "Enter disease: ";
        cin >> disease;
    }
};

class Treatment : public Disease {
public:
    void display() {
        cout << "\nPatient: " << name;
        cout << "\nDisease: " << disease;
        cout << "\nTreatment Assigned\n";
    }
};

int main() {
    Treatment t;
    t.getName();
    t.getDisease();
    t.display();
}