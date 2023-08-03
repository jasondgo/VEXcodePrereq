#include <iostream>

/*

Question 4:

Develop a program that converts a temperature in Celsius to Fahrenheit. 
Prompt the user to enter a temperature in Celsius using `cin`. 
Perform the conversion using the formula `F = (9/5) * C + 32` and display the result using `cout`.


*/
int main() {
    double celsius;

    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> celsius;

    double fahrenheit = (9.0 / 5.0) * celsius + 32.0;

    std::cout << "Temperature in Fahrenheit: " << fahrenheit << "\n";

    return 0;
}
