#include <iostream>

/*
 * Write a program that reads in a temperature in degrees Celsius and displays the
 * corresponding temperature in degrees Fahrenheit.
 */

using namespace std;

float convertCelsiusToFahrenheit(float celsius);

int main() {
    float celsiusTemperature;
    cout << ">> Enter a temperature in degrees Celsius: ";
    cin >> celsiusTemperature;

    cout << "Temperature in Fahrenheit = " << convertCelsiusToFahrenheit(celsiusTemperature) << endl;

    return 0;
}

float convertCelsiusToFahrenheit(float celsius) {
    return ((9 * celsius)/5) + 32;
}