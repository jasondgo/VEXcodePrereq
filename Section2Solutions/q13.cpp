#include <iostream>

/*

Question 13:

Write a program that checks if a given number is a prime number using if-else statements. 
`Cout` is the prime number.

*/

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    bool isPrime = true;

    if (number <= 1) {
        isPrime = false;
    } else {
        int divisor = 2;

        while (divisor * divisor <= number) {
            if (number % divisor == 0) {
                isPrime = false;
                break;
            }
            divisor++;
        }
    }

    if (isPrime) {
        std::cout << number << " is a prime number\n";
    } else {
        std::cout << number << " is not a prime number\n";
    }

    return 0;
}
