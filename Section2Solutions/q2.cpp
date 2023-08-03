#include <iostream>


/*

Question 2:

Write a program that determines if a given number is even or odd using if-else statements. 
`Cout` whether the number is even or odd. ( Hint: Use Modulo )

*/

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << "The number is even." << "\n";
    } else {
        std::cout << "The number is odd." << "\n";
    }

    return 0;
}
