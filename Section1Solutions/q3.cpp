#include <iostream>

/*

Question 3:

Write a program that asks the user to enter two integers. 
Store the values in variables and display their sum, difference, product, and quotient using arithmetic operations and `cout`.



*/


int main() {
    int num1, num2;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    double quotient = num1 / (1.0 * num2 );

    std::cout << "Sum: " << sum << "\n";
    std::cout << "Difference: " << difference << "\n";
    std::cout << "Product: " << product << "\n";
    std::cout << "Quotient: " << quotient << "\n";

    return 0;
}
