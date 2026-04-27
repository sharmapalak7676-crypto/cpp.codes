#include<iostream>
using namespace std;

class Bus {
private:
    int seats;

public:
    Bus() { seats = 10; }

    void bookSeat() {
        if(seats > 0) {
            seats--;
            cout << "Seat Booked\n";
        } else {
            cout << "No Seats Available\n";
        }
    }

    void showSeats() {
        cout << "Available Seats: " << seats << endl;
    }
};

int main() {
    Bus b;
    b.showSeats();
    b.bookSeat();
    b.bookSeat();
    b.showSeats();
}