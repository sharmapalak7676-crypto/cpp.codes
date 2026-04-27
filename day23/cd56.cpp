#include<iostream>
using namespace std;

class Hotel {
private:
    int rooms = 5;

public:
    void bookRoom() {
        if(rooms > 0) {
            rooms--;
            cout << "Room booked!\n";
        } else {
            cout << "No rooms available\n";
        }
    }

    void showRooms() {
        cout << "Available rooms: " << rooms << endl;
    }
};

int main() {
    Hotel h;
    h.showRooms();
    h.bookRoom();
    h.showRooms();
}