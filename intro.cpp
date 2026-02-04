//private vs public access control 
#include <iostream>
using namespace std;

class Student {
private:
    int marks;   

public:
    void setMarks(int m) {
        marks = m;
    }

    void showMarks() {
        cout << "Marks: " << marks;
    }
};

int main() {
    Student s;

    
    s.setMarks(90);    
    s.showMarks();      

    return 0;
}
