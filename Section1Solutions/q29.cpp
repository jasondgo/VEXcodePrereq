#include <iostream>

/*

Question 29: 

Develop a program that asks the user to enter the masses of two objects and their respective distances from a point. 
Store the values in variables and calculate the total torque exerted on the point using the formula 
`torque = mass1 * distance1 + mass2 * distance2`. 
Display the torque using `cout`.


*/

int main() {
    double mass1, mass2, distance1, distance2;
    double const gravity = 9.8;

    std::cout << "Enter the mass of object 1: ";
    std::cin >> mass1;
    mass1 *= 9.8;

    std::cout << "Enter the distance of object 1 from the point: ";
    std::cin >> distance1;

    std::cout << "Enter the mass of object 2: ";
    std::cin >> mass2;
    mass2 *= 9.8;

    std::cout << "Enter the distance of object 2 from the point: ";
    std::cin >> distance2;

    double torque = mass1 * distance1 + mass2 * distance2;

    std::cout << "Torque exerted on the point: " << torque << "\n";

    return 0;
}
