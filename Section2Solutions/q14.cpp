#include <iostream>

/*

Question 14:

Write a program that checks if a given number is a palindrome using a while loop and if-else statements. 
`Cout` whether it is a palindrome or not.

*/


int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int originalNumber = number;
    int reversedNumber = 0;

    while (number != 0) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    if (originalNumber == reversedNumber) {
        std::cout << originalNumber << " is a palindrome\n";
    } else {
        std::cout << originalNumber << " is not a palindrome\n";
    }

    return 0;
}
