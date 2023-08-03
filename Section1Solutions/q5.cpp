#include <iostream>

/*

Question 5:

Create a program that asks the user to enter three numbers. 
Store the values in variables and display their average

*/


int main() {
    double num1, num2, num3;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the third number: ";
    std::cin >> num3;

    double average = (num1 + num2 + num3) / 3;

    std::cout << "Average: " << average << "\n";

    return 0;
}
