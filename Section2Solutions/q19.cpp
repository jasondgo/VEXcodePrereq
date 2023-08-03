#include <iostream>
#include <cmath>

/*

Question 19:

Write a program to find the roots of and quadratic equation of type ax2+bx+c where a is not equal to zero. 
You will need to distinguish whether the roots are real & equal, real & distinct, or the roots are imaginary. 
`Cout` the roots and which classification they fall into.

*/


int main() {
    double a, b, c;
    std::cout << "Enter coefficients (a, b, c) of the quadratic equation: ";
    std::cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {

        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Roots are real and distinct.\n";
        std::cout << "Root 1: " << root1 << "\n";
        std::cout << "Root 2: " << root2 << "\n";

    } else if (discriminant == 0) {

        double root = -b / (2 * a);
        std::cout << "Roots are real and equal.\n";
        std::cout << "Root: " << root << "\n";

    } else {

        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        std::cout << "Roots are imaginary.\n";
        std::cout << "Root 1: " << realPart << " + " << imaginaryPart << "i\n";
        std::cout << "Root 2: " << realPart << " - " << imaginaryPart << "i\n";
        
    }

    return 0;
}
