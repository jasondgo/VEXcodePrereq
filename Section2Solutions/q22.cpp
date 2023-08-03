#include <iostream>

/*

Question 22: 

Write a program to calculate GCF of Two given numbers. `Cout` the GCF. (Hint: Use the Euclidean Algorithm)

*/

int main() {
    int number1, number2;
    std::cout << "Enter two numbers: ";
    std::cin >> number1 >> number2;

    while (number1 != number2) {
        if (number1 > number2) {
            number1 -= number2;
        } else {
            number2 -= number1;
        }
    }

    std::cout << "The GCF of the two numbers is: " << number1 << "\n";

    return 0;
}
