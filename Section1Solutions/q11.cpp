#include <iostream>

/*

Question 11:

Write a program that asks the user to enter a 3 digit positive integer. 
Store the value in a variable and calculate the sum of its digits. Display the sum using `cout`. 
(Hint: Use the modulo operator `%` to extract each digit.)


*/

int main() {
    int number;

    std::cout << "Enter a 3-digit positive integer: ";
    std::cin >> number;

    int digit1 = number / 100;        // Extract the first digit
    int digit2 = (number / 10) % 10;  // Extract the second digit
    int digit3 = number % 10;         // Extract the third digit

    int sum = digit1 + digit2 + digit3;

    std::cout << "Sum of the digits: " << sum << "\n";

    return 0;
}

