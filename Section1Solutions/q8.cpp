#include <iostream>

/*

Question 8: 

Write a program that asks the user to enter a number. 
Store the value in a variable and display its square and cube using arithmetic operations and `cout`.

*/


int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int square = number * number;
    int cube = number * number * number;

    std::cout << "Square: " << square << "\n";
    std::cout << "Cube: " << cube << "\n";

    return 0;
}
