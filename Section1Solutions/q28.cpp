#include <iostream>
#include <cmath>

/*

Question 28:

 A wheel with a diameter of 20 inches is rolled along the ground. 
 Write a program that prompts the user to enter the number of revolutions the wheel has made. 
 Store the value in a variable and calculate the linear distance traveled by the wheel using the formula 
 `distance = diameter * pi * revolutions`. Display the distance using `cout`.

*/

int main() {
    double diameter, revolutions;
    const double pi = M_PI;

    std::cout << "Enter the number of revolutions: ";
    std::cin >> revolutions;

    std::cout << "Enter the diameter of the wheel: ";
    std::cin >> diameter;

    double distance = diameter * pi * revolutions;

    std::cout << "Distance traveled by the wheel: " << distance << "\n";

    return 0;
}
