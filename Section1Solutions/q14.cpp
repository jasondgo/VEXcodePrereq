#include <iostream>
#include <cmath>

/*

Question 14:

Write a program that prompts the user to enter a decimal number. 
Store the value in a variable and round it to the nearest whole number using the `round()` function from the 
`cmath` library. Display the rounded number using `cout`.


*/

int main() {
    double decimalNumber;

    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    double roundedNumber = std::round(decimalNumber);

    std::cout << "Rounded number: " << roundedNumber << "\n";

    return 0;
}
