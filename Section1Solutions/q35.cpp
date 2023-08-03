#include <iostream>
#include <cmath>

/*

Question 35:

Write a program that asks the user to enter the radius and angular speed (in revolutions per minute) of a wheel. 
Store the values in variables and calculate the linear speed using the formula `linear_speed = (2 * pi * radius * angular_speed) / 60`. 
Display the linear speed using `cout`. (Include the `<cmath>` header and use the constant `M_PI` for pi.)

*/

int main() {
    double radius, angular_speed;

    std::cout << "Enter the radius of the wheel: ";
    std::cin >> radius;

    std::cout << "Enter the angular speed (in revolutions per minute): ";
    std::cin >> angular_speed;

    double linear_speed = (2 * M_PI * radius * angular_speed) / 60;

    std::cout << "Linear speed: " << linear_speed << "\n";

    return 0;
}
