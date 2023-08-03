#include <iostream>

/*

Question 12:

Create a program that prompts the user to enter the length of three sides of a triangle. 
Store the values in variables and calculate the perimeter of the triangle by summing the lengths of all three sides. 
Display the perimeter using `cout`.


*/


int main() {
    double side1, side2, side3;

    std::cout << "Enter the length of side 1: ";
    std::cin >> side1;

    std::cout << "Enter the length of side 2: ";
    std::cin >> side2;

    std::cout << "Enter the length of side 3: ";
    std::cin >> side3;

    double perimeter = side1 + side2 + side3;

    std::cout << "Perimeter of the triangle: " << perimeter << "\n";

    return 0;
}
