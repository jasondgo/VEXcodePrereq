#include <iostream>

/*

Question 3: 

Write a program that calculates the sum of all even numbers between 1 and a given number using a while loop. 
`Cout` the final sum.

*/

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int sum = 0;
    int i = 2; // Start with the first even number, 2

    while (i <= number) {
        sum += i;
        i += 2; // Increment by 2 to get the next even number
    }

    std::cout << "The sum of all even numbers between 1 and " << number << " is: " << sum << "\n";

    return 0;
}
