#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0/5.0) + 32.0;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0/9.0;
}

int main() {
    int choice;
    double temperature, result;
    
    cout << "=== Temperature Converter ===" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    
    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        result = celsiusToFahrenheit(temperature);
        cout << temperature << "°C = " << result << "°F" << endl;
    }
    else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        result = fahrenheitToCelsius(temperature);
        cout << temperature << "°F = " << result << "°C" << endl;
    }
    else {
        cout << "Invalid choice! Please run the program again." << endl;
    }
    
    return 0;
}
