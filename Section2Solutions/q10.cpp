#include <iostream>


/*

Question 10:

Write a program that calculates the sum of all numbers divisible by 3 and 5 between 1 and a given number using a while loop.
`Cout` the sum of the numbers.

*/

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int sum = 0;
    int currentNumber = 1;

    while (currentNumber <= number) {
        if (currentNumber % 3 == 0 && currentNumber % 5 == 0) {
            sum += currentNumber;
        }
        currentNumber++;
    }

    std::cout << "The sum of numbers divisible by 3 and 5 between 1 and " << number << " is: " << sum << "\n";

    return 0;
}
