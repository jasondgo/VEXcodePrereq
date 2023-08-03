#include <iostream>

/*

Question 32:

Develop a program that asks the user to enter the angular speed (in radians per second) and radius of rotation. 
Store the values in variables and calculate the linear speed using the formula 
`linear_speed = angular_speed * radius`. Display the linear speed using `cout`.


*/

int main() {
    double angular_speed, radius;

    std::cout << "Enter the angular speed (in radians per second): ";
    std::cin >> angular_speed;

    std::cout << "Enter the radius of rotation: ";
    std::cin >> radius;

    double linear_speed = angular_speed * radius;

    std::cout << "Linear speed: " << linear_speed << "\n";

    return 0;
}
