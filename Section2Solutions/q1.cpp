#include <iostream>

/*

Question 1: 

Write a program that checks if a given number is positive, negative, or zero using if-else statements. 
 `Cout` whether the number is positive, negative, or zero

*/

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "The number is positive." << "\n";
    } else if (number < 0) {
        std::cout << "The number is negative." << "\n";
    } else {
        std::cout << "The number is zero." << "\n";
    }

    return 0;
}
