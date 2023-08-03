#include <iostream>

/*

Question 18:

Develop a program that asks the user to enter the initial velocity, acceleration, and time. 
Store the values in variables and calculate the final velocity 
using the formula `final_velocity = initial_velocity + (acceleration * time)`. 
Display the final velocity using `cout`

*/



int main() {
    double initial_velocity, acceleration, time;

    std::cout << "Enter the initial velocity: ";
    std::cin >> initial_velocity;

    std::cout << "Enter the acceleration: ";
    std::cin >> acceleration;

    std::cout << "Enter the time: ";
    std::cin >> time;

    double final_velocity = initial_velocity + (acceleration * time);

    std::cout << "Final velocity: " << final_velocity << "\n";

    return 0;
}
