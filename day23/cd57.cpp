#include<iostream>
using namespace std;

class Exam {
protected:
    int marks;
};

class Result : public Exam {
public:
    void getMarks() {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void showResult() {
        if(marks >= 40)
            cout << "Pass\n";
        else
            cout << "Fail\n";
    }
};

int main() {
    Result r;
    r.getMarks();
    r.showResult();
}