#include <iostream>
#include <cmath>

/*

Question 26:

Develop a program that asks the user to enter the lengths of two sides and the included angle of a triangle. 
Store the values in variables and calculate its area using the formula 
`area = (1/2) * side1 * side2 * sin(angle)`. Display the area using `cout`. (
Include the `<cmath>` header and use the `sin()` 

*/


int main() {
    double side1, side2, angle;

    std::cout << "Enter the length of side 1: ";
    std::cin >> side1;

    std::cout << "Enter the length of side 2: ";
    std::cin >> side2;

    std::cout << "Enter the included angle (in radians): ";
    std::cin >> angle;

    double area = (1.0 / 2.0) * side1 * side2 * std::sin(angle);

    std::cout << "Area of the triangle: " << area << "\n";

    return 0;
}
