//armstrong number
#include <iostream>
using namespace std;

int main() {
    int n, temp, digit, sum = 0;
    cin >> n;

    temp = n;
    while (n > 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    if (sum == temp)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}