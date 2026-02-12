//constructor types...
 #include <iostream>
using namespace std;

class Demo {
    int a;

public:
    // Default constructor
    Demo() {
        a = 5;
    cout << "Default Constructor called\n";
    }

    //parametrized constructor
    Demo(int x) {
        a = x;
        cout << "Parameterized Constructor called\n";
    }

    // Copy constructor
    Demo(Demo &d) {
        a = d.a;
        cout << "Copy Constructor called\n";
    }

    void show() {
        cout << "Value of a = " << a << endl;
    }
};

int main() {
    Demo d1;       
    d1.show();

    Demo d2(10);    
    d2.show();

    Demo d3 = d2;   
    d3.show();

    return 0;
}
