#include <iostream>

/*

Question 2:

Create a program that calculates the area and perimeter of a rectangle. 
Prompt the user to enter the length and width of the rectangle using `cin`. 
Display the results using `cout`. Variable names should be relevant.


*/

int main() {
    double length, width;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    double area = length * width;
    double perimeter = 2 * (length + width);

    std::cout << "Area: " << area << "\n";
    std::cout << "Perimeter: " << perimeter << "\n";

    return 0;
}
