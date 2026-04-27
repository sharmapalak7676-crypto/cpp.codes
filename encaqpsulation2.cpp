#include <iostream>
#include <iomanip>
using namespace std;

class Temperature {
private:
    double celsius;

public:
    Temperature() : celsius(0.0) {}

    // Getters (multiple views of same data)
    double getCelsius() const {
        return celsius;
    }

    double getFahrenheit() const {
        return (celsius * 9.0 / 5.0) + 32.0;
    }

    // Single setter with validation
    void setCelsius(double temp) {
        if (temp >= -273.15 && temp <= 1000.0) {  // realistic range
            celsius = temp;
        } else {
            cout << "Error: Temperature must be between -273.15°C and 1000°C!\n";
        }
    }

    void setFahrenheit(double f) {
        double c = (f - 32.0) * 5.0 / 9.0;
        setCelsius(c);   // reuse validation
    }
};

int main() {
    Temperature t;

    t.setCelsius(25.5);
    cout << fixed << setprecision(1);
    cout << "C: " << t.getCelsius() << "°C  →  F: " << t.getFahrenheit() << "°F\n";

    t.setFahrenheit(98.6);
    cout << "C: " << t.getCelsius() << "°C  →  F: " << t.getFahrenheit() << "°F\n";

    t.setCelsius(-300);     // invalid
    t.setFahrenheit(212);   // boiling point

    cout << "Final →  C: " << t.getCelsius() << "°C\n";

    // t.celsius = 99999;   // ← not possible
    return 0;
}
