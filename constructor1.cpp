// Create a class Add that:
//Has data members m and n
//Uses:
//Default constructor
//Parameterized constructor (defined outside class)
//Copy constructor
//Displays values of objects
//Demonstrates copy initialization //
#include <iostream>
using namespace std;

class Add {
    int m, n;

public:
    
    Add() {
        m = 0;
        n = 0;
        cout << "Default Constructor Called" << endl;
    }

    Add(int x, int y);

    
    Add(Add &obj) {
        m = obj.m;
        n = obj.n;
        cout << "Copy Constructor Called" << endl;
    }

    void display() {
        cout << "m = " << m << " n = " << n << endl;
    }
};


Add::Add(int x, int y) {
    m = x;
    n = y;
    cout << "Parameterized Constructor Called" << endl;
}

int main() {

    Add obj1;              
    obj1.display();

    Add obj2(5, 6);      
    obj2.display();

    Add obj3 = obj2;     
    obj3.display();

    return 0;
}