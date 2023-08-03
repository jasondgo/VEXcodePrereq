#include <iostream>
#include <cmath>


/*

Question 7:

Create a program that calculates the area and circumference of a circle. 
Prompt the user to enter the radius using `cin`. 
Perform the calculations using appropriate formulas and display the results using `cout`.



*/


int main() {
    double radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    double area = M_PI * radius * radius;
    double circumference = 2 * 3.14159 * radius;

    std::cout << "Area: " << area << "\n";
    std::cout << "Circumference: " << circumference << "\n";

    return 0;
}
