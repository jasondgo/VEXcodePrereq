#include <iostream>
#include <cmath>

/*

Question 21:

Develop a program that asks the user to enter the radius of a sphere. 
Store the value in a variable and calculate its volume using the formula `volume = (4/3) * pi * radius * radius * radius`. 
Display the volume using `cout`. (Use the constant `M_PI` for pi.)

*/


int main() {
    double radius;
    const double pi = M_PI;

    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;

    double volume = (4.0 / 3.0) * pi * std::pow(radius, 3);

    std::cout << "Volume of the sphere: " << volume << "\n";

    return 0;
}
