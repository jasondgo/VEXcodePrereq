#include <iostream>

/*

Question 22:

Write a program that prompts the user to enter the mass and speed of an object. 
Store the values in variables and calculate its momentum using the formula `momentum = mass * speed`. 
Display the momentum using `cout`.

*/


int main() {
    double mass, speed;

    std::cout << "Enter the mass of the object: ";
    std::cin >> mass;

    std::cout << "Enter the speed of the object: ";
    std::cin >> speed;

    double momentum = mass * speed;

    std::cout << "Momentum of the object: " << momentum << "\n";

    return 0;
}
