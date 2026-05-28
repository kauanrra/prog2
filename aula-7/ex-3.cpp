#include <iostream>

using namespace std;

class Termometro {
private:
    double temperaturaCelsius;

public:
    Termometro() : temperaturaCelsius(25.0) {}

    void setTemperaturaCelsius(double t) {
        if (t >= -273.15) {
            temperaturaCelsius = t;
        }
    }

    double getTemperaturaCelsius() const {
        return temperaturaCelsius;
    }

    double getTemperaturaFahrenheit() const {
        return (temperaturaCelsius * 9.0 / 5.0) + 32.0;
    }
};
