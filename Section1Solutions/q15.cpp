#include <iostream>
#include <cmath>

/*

Question 15:

Create a program that asks the user to enter the lengths of three sides of a triangle. 
Store the values in variables and calculate the area of the triangle using Heron's formula: 
`sqrt(s * (s - side1) * (s - side2) * (s - side3))`, where `s` is the semi-perimeter (`(side1 + side2 + side3) / 2`). 
Display the area using `cout`.


*/


int main() {
    double side1, side2, side3;

    std::cout << "Enter the length of side 1: ";
    std::cin >> side1;

    std::cout << "Enter the length of side 2: ";
    std::cin >> side2;

    std::cout << "Enter the length of side 3: ";
    std::cin >> side3;

    double s = (side1 + side2 + side3) / 2;
    double area = std::sqrt(s * (s - side1) * (s - side2) * (s - side3));

    std::cout << "Area of the triangle: " << area << "\n";

    return 0;
}
