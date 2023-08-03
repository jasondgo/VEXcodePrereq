#include <iostream>
#include <cmath>

/*

Question 25: 

 Create a program that prompts the user to enter the initial velocity, acceleration, and displacement. 
 Store the values in variables and calculate the final velocity using the formula 
  `final_velocity^2 = initial_velocity^2 + 2 * acceleration * displacement`. 
 Display the final velocity using `cout`.


*/

int main() {
    double initial_velocity, acceleration, displacement;

    std::cout << "Enter the initial velocity: ";
    std::cin >> initial_velocity;

    std::cout << "Enter the acceleration: ";
    std::cin >> acceleration;

    std::cout << "Enter the displacement: ";
    std::cin >> displacement;

    double final_velocity = std::sqrt(std::pow(initial_velocity, 2) + 2 * acceleration * displacement);

    std::cout << "Final velocity: " << final_velocity << "\n";

    return 0;
}
