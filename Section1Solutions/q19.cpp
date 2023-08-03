#include <iostream>
#include <cmath>

/*

Question 19: 

Write a program that prompts the user to enter the radius and height of a cylinder. 
Store the values in variables and calculate its volume using the formula `volume = pi * radius * radius * height`. 
Display the volume using `cout`. (Use the constant `M_PI` from the `cmath` library for pi.)

*/


int main() {
    double radius, height;
    const double pi = M_PI;

    std::cout << "Enter the radius of the cylinder: ";
    std::cin >> radius;

    std::cout << "Enter the height of the cylinder: ";
    std::cin >> height;

    double volume = pi * radius * radius * height;

    std::cout << "Volume of the cylinder: " << volume << "\n";

    return 0;
}
