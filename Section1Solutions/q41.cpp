#include <iostream>
#include <cmath>


/*

Question 41:

 Create a program that prompts the user to enter the lengths of three sides of a triangle. 
 Store the values in variables and use the Law of Sines to calculate one of the angles using the `asin()` function. 
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

    double angle_rad = std::asin((side2 * std::sin(side1)) / side3);
    double angle_deg = angle_rad * (180 / M_PI);

    std::cout << "Calculated angle: " << angle_deg << " degrees" << "\n";

    return 0;
}
