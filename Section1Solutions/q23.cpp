#include <iostream>

/*

Question 23:

Create a program that asks the user to enter the lengths of the base and height of a triangle. 
Store the values in variables and calculate its area using the formula `area = (1/2) * base * height`. 
Display the area using `cout`

*/

int main() {
    double base, height;

    std::cout << "Enter the base length of the triangle: ";
    std::cin >> base;

    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    double area = (1.0 / 2.0) * base * height;

    std::cout << "Area of the triangle: " << area << "\n";

    return 0;
}
