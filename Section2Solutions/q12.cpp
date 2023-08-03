#include <iostream>

/*

Question 11:

Write a program that determines the grade of a student based on their score using if-else statements. 
For example, if grade is above a 90 give an A, greater than 80 give B so on and so forth. 
`Cout` the grade.



*/

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int sum = 0;
    int remainingDigits = number;

    while (remainingDigits != 0) {
        int digit = remainingDigits % 10;
        sum += digit;
        remainingDigits /= 10;
    }

    std::cout << "The sum of the digits of " << number << " is: " << sum << "\n";

    return 0;
}
