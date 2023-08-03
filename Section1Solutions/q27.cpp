#include <iostream>

/*

Question 27:

Write a program that asks the user to enter the mass and acceleration of an object. 
Store the values in variables and calculate the force using the formula `force = mass * acceleration`. 
Display the force using `

*/


int main() {
    double mass, acceleration;

    std::cout << "Enter the mass of the object: ";
    std::cin >> mass;

    std::cout << "Enter the acceleration: ";
    std::cin >> acceleration;

    double force = mass * acceleration;

    std::cout << "Force on the object: " << force << "\n";

    return 0;
}
