#include <iostream>
using namespace std;

class SmartFan {

private:
    int speed;      // hidden speed
    int password;   // hidden password

public:

    SmartFan(int p) {
        speed = 0;      // fan initially off
        password = p;   // set password
    }

    void start() {

        int pass;
        cout<<"Enter Password: ";
        cin>>pass;

        if(pass == password) {

            int choice;
            int temp;

            cout<<"1 Increase Speed\n";
            cout<<"2 Decrease Speed\n";
            cout<<"3 Auto Mode\n";
            cout<<"4 Show Speed\n";

            cout<<"Enter Choice: ";
            cin>>choice;

            if(choice == 1) {

                speed++;
                cout<<"Speed Increased\n";
                cout<<"Current Speed = "<<speed<<endl;
            }

            else if(choice == 2) {

                if(speed > 0)
                    speed--;

                cout<<"Speed Decreased\n";
                cout<<"Current Speed = "<<speed<<endl;
            }

            else if(choice == 3) {

                cout<<"Enter Temperature: ";
                cin>>temp;

                if(temp > 30)
                    speed = 5;
                else if(temp > 20)
                    speed = 3;
                else
                    speed = 1;

                cout<<"Auto Mode Activated\n";
                cout<<"Current Speed = "<<speed<<endl;
            }

            else if(choice == 4) {

                cout<<"Current Speed = "<<speed<<endl;

            }

            else {

                cout<<"Invalid Choice\n";

            }
        }

        else {

            cout<<"Wrong Password\n";

        }
    }
};

int main() {

    SmartFan F(1111);

    F.start();

}