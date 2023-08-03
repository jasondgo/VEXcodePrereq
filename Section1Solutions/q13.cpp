#include <iostream>
#include <cmath>

/*

Question 13:

Develop a program that asks the user to enter a number. S
Store the value in a variable and calculate its cube using the pow() in <cmath> library. Display the cube using `cout`.

*/


int main() {
    double number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    double cube = std::pow(number, 3);

    std::cout << "Cube of the number: " << cube << "\n";

    return 0;
}
