#include <iostream>

/*

Question 20:

Write a program to reverse any given integer number. `Cout` the reversed number.

*/

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int reversedNumber = 0;

    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    std::cout << "Reversed number: " << reversedNumber << "\n";

    return 0;
}
