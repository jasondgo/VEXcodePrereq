#include <iostream>

/*

Question 4:

Write a function to convert a temperature in Fahrenheit to Celsius. 
Pass a decimal value as an argument and return the converted value to be printed.

*/


double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    double fahrenheit;
    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> fahrenheit;

    double celsius = fahrenheitToCelsius(fahrenheit);
    std::cout << "Temperature in Celsius: " << celsius << "\n";

    return 0;
}
