#include <iostream>

/*

Question 8:

Write a program that prints the Fibonacci series up to a given number using a while loop.

*/


int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Fibonacci series up to " << number << ":\n";

    int firstNumber = 0;
    int secondNumber = 1;

    while (firstNumber <= number) {
        std::cout << firstNumber << " ";

        int nextNumber = firstNumber + secondNumber;
        firstNumber = secondNumber;
        secondNumber = nextNumber;
    }

    std::cout << "\n";

    return 0;
}
