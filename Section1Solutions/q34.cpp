#include <iostream>


/*

Question 34:

Write a program that prompts the user to enter the force and distance on a lever arm. 
Store the values in variables and calculate the torque using the formula 
`torque = force * distance`. Display the torque using `cout`

*/

int main() {
    double force, distance;

    std::cout << "Enter the force applied on the lever arm: ";
    std::cin >> force;

    std::cout << "Enter the distance from the pivot point: ";
    std::cin >> distance;

    double torque = force * distance;

    std::cout << "Torque on the lever arm: " << torque << "\n";

    return 0;
}
