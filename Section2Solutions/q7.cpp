#include <iostream>

/*

Question 7:

Write a program that prints all the prime numbers between 1 and a given number using a while loop.

*/

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Prime numbers between 1 and " << number << " are: ";

    int currentNumber = 2;

    while (currentNumber <= number) {
        bool isPrime = true;
        int i = 2;

        while (i * i <= currentNumber) {
            if (currentNumber % i == 0) {
                isPrime = false;
                break;
            }
            i++;
        }

        if (isPrime)
            std::cout << currentNumber << " ";

        currentNumber++;
    }

    std::cout << "\n";

    return 0;
}
