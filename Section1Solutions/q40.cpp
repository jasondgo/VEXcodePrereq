#include <iostream>
#include <cmath>

/*

Question 40:

Write a program that asks the user to enter the lengths of two sides of a triangle and the included angle between them (in degrees). 
Store the values in variables and use the Law of Cosines to calculate the length of the third side. 
Display the length of the third side using `cout`.

*/


int main() {
    double side1, side2, angle_deg;

    std::cout << "Enter the length of side 1: ";
    std::cin >> side1;

    std::cout << "Enter the length of side 2: ";
    std::cin >> side2;

    std::cout << "Enter the included angle (in degrees): ";
    std::cin >> angle_deg;

    double angle_rad = angle_deg * (M_PI / 180);
    double side3 = std::sqrt(side1 * side1 + side2 * side2 - 2 * side1 * side2 * std::cos(angle_rad));

    std::cout << "Length of the third side: " << side3 << "\n";

    return 0;
}
