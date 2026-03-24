#include <iostream>
using namespace std;

class Calculator {
public:
    // Function Overloading
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator obj;

    cout << "Sum of 2 integers: " << obj.add(2, 3) << endl;
    cout << "Sum of 2 floats: " << obj.add(2.5f, 3.5f) << endl;
    cout << "Sum of 3 integers: " << obj.add(1, 2, 3) << endl;

    return 0;
}