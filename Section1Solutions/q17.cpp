#include <iostream>

/*

Question 17:

Create a program that prompts the user to enter the mass and volume of an object. 
Store the values in variables and calculate its density using the formula `density = mass / volume`. 
Display the density using `cout`.

*/


int main() {
    double mass, volume;

    std::cout << "Enter the mass of the object: ";
    std::cin >> mass;

    std::cout << "Enter the volume of the object: ";
    std::cin >> volume;

    double density = mass / volume;

    std::cout << "Density: " << density << "\n";

    return 0;
}
