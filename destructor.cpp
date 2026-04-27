//destructor..
#include <iostream>
using namespace std;

class Sample {
public:
    Sample() {
        cout << "Constructor is called\n";
    }

    ~Sample() {
        cout << "Destructor is called\n";
    }
};

int main() {
    Sample s1;
    cout << "Inside main function\n";
    return 0;
}