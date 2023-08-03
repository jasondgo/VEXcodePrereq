#include <iostream>

/*

Question 5:

Write a program that finds the largest of three numbers using if-else statements.
`Cout` the largest number.

*/


int main() {
    int num1, num2, num3;
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    int largest = num1;

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    std::cout << "The largest number is: " << largest << "\n";

    return 0;
}
