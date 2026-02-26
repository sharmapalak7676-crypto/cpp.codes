#include <iostream>
using namespace std;

class Parking {

private:
    int cars[100];   // store car numbers
    int size = 0;    // number of parked cars

public:

    void addCar(int n) {

        cars[size] = n;  // add car number
        size++;          // increase count

        cout<<"Car Added\n";
    }

    void removeCar() {

        if(size > 0) {
            size--;      // remove last car
            cout<<"Last Car Removed\n";
        }
        else
            cout<<"Parking Empty\n";
    }

    void display() {

        cout<<"Cars: ";

        for(int i=0;i<size;i++)
            cout<<cars[i]<<" ";

        cout<<endl;
    }
};

int main() {

    Parking P;

    P.addCar(101);
    P.addCar(102);
    P.addCar(103);

    P.display();

    P.removeCar();

    P.display();

}