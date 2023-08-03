#include <iostream>
#include <cmath>

/*

Question 38:

Create a program that asks the user to enter the lengths of two sides of a right triangle. 
Store the values in variables and calculate the value of one of the acute angles using the `acos()` function from the `cmath` library. 
Display the angle in degrees using `cout`.

*/



int main() {
    double side1, side2;

    std::cout << "Enter the length of side 1: ";
    std::cin >> side1;

    std::cout << "Enter the length of side 2: ";
    std::cin >> side2;

    double angle_rad = std::acos(side1 / side2);
    double angle_deg = angle_rad * (180 / M_PI);

    std::cout << "Acute angle in degrees: " << angle_deg << "\n";

    return 0;
}
