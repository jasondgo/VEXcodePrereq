#include <iostream>
#include <cmath>


/*

Question 10:

Develop a program that prompts the user to enter the lengths of two sides of a right triangle. 
Store the values in variables and calculate the length of the hypotenuse using the 
Pythagorean theorem (`c = sqrt(a^2 + b^2)`). Display the length of the hypotenuse using `cout`.


*/


int main() {
    double side1, side2;

    std::cout << "Enter the length of side 1: ";
    std::cin >> side1;

    std::cout << "Enter the length of side 2: ";
    std::cin >> side2;

    double hypotenuse = std::sqrt(std::pow(side1, 2) + std::pow(side2, 2));

    std::cout << "Length of the hypotenuse: " << hypotenuse << "\n";

    return 0;
}

