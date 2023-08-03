#include <iostream>

/*

Question 4:

Write a program that calculates the factorial of a given number using a while loop. 
`Cout` the final sum of the factorial.

*/

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int factorial = 1;
    int i = 1;

    while (i <= number) {
        factorial *= i;
        i++;
    }

    std::cout << "The factorial of " << number << " is: " << factorial << "\n";

    return 0;
}
