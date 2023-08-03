#include <iostream>
#include <cmath>


/*

Question 39:

Develop a program that prompts the user to enter the lengths of three sides of a triangle. 
Store the values in variables and use the Law of Cosines to calculate one of the angles using the `acos()` function. 
Display the angle in degrees using `cout`.


*/

int main() {
    double side1, side2, side3;

    std::cout << "Enter the length of side 1: ";
    std::cin >> side1;

    std::cout << "Enter the length of side 2: ";
    std::cin >> side2;

    std::cout << "Enter the length of side 3: ";
    std::cin >> side3;

    double angle_rad = std::acos((side1 * side1 + side2 * side2 - side3 * side3) / (2 * side1 * side2));
    double angle_deg = angle_rad * (180 / M_PI);

    std::cout << "Angle in degrees: " << angle_deg << "\n";

    return 0;
}
