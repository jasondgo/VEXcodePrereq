#include <iostream>


/*

Question 15:

Write a program that calculates the sum of all prime numbers between 1 and a given number using a while loop. 
`Cout` the sum.

*/


int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int sum = 0;
    int currentNumber = 2;

    while (currentNumber <= number) {
        bool isPrime = true;
        int divisor = 2;

        while (divisor * divisor <= currentNumber) {
            if (currentNumber % divisor == 0) {
                isPrime = false;
                break;
            }
            divisor++;
        }

        if (isPrime) {
            sum += currentNumber;
        }

        currentNumber++;
    }

    std::cout << "The sum of prime numbers between 1 and " << number << " is: " << sum << "\n";

    return 0;
}
