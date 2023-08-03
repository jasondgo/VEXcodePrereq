#include <iostream>
#include <cmath>

/*

Question 31: 
Write a program that asks the user to enter the masses of two objects and their respective distances from each other. 
Store the values in variables and calculate the gravitational force between the objects using the formula 
`force = (G * mass1 * mass2) / (distance * distance)`, where `G` is the gravitational constant. 
Display the force using `cout`.


*/


int main() {
    double mass1, mass2, distance;
    const double G = std::pow(6.67430, -11); // Gravitational constant

    std::cout << "Enter the mass of object 1: ";
    std::cin >> mass1;

    std::cout << "Enter the mass of object 2: ";
    std::cin >> mass2;

    std::cout << "Enter the distance between the objects: ";
    std::cin >> distance;

    double force = (G * mass1 * mass2) / (distance * distance);

    std::cout << "Gravitational force between the objects: " << force << "\n";

    return 0;
}
