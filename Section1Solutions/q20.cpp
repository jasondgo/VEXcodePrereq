#include <iostream>

/*

Question 20:

Develop a program that prompts the user to enter the length of a side of a cube. 
Store the value in a variable and calculate its surface area using the formula `surface_area = 6 * side_length * side_length`. 
Display the surface area using `cout`..


*/

int main() {
    double side_length;

    std::cout << "Enter the length of a side of the cube: ";
    std::cin >> side_length;

    double surface_area = 6 * side_length * side_length;

    std::cout << "Surface area of the cube: " << surface_area << "\n";

    return 0;
}
