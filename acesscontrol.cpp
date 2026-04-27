//public and private acess control
 #include <iostream>
using namespace std;

class Student {
private:
    int marks = 90;

public:
    int roll = 21;

    void showMarks() {
        cout << marks << endl;
    }
};

int main() {
    Student s;
    cout << s.roll << endl;
    s.showMarks();
    return 0;
} 