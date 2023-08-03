#include <iostream>
#include <cmath>

/*

Question 37:

Write a program that prompts the user to enter an angle in degrees.
Store the value in a `double` variable and convert it to radians using the formula 
`radians = degrees * (M_PI / 180)`. Display the angle in radians using `cout`.


*/


int main() {
    double degrees;

    std::cout << "Enter an angle in degrees: ";
    std::cin >> degrees;

    double radians = degrees * (M_PI / 180);

    std::cout << "Angle in radians: " << radians << "\n";

    return 0;
}
