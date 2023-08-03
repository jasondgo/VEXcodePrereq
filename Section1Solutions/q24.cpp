#include <iostream>

/*

Question 24:

Write a program that asks the user to enter the length, width, and height of a rectangular prism. 
Store the values in variables and calculate its surface area using the formula 
`surface_area = 2 * (length * width + length * height + width * height)`. 
Display the surface area using `cout`.

*/



int main() {
    double length, width, height;

    std::cout << "Enter the length of the rectangular prism: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangular prism: ";
    std::cin >> width;

    std::cout << "Enter the height of the rectangular prism: ";
    std::cin >> height;

    double surface_area = 2 * (length * width + length * height + width * height);

    std::cout << "Surface area of the rectangular prism: " << surface_area << "\n";

    return 0;
}
