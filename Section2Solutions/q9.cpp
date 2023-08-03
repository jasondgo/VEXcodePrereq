#include <iostream>

/*

Question 9: 

Write a program that checks if a given number is a perfect square using if-else statements. 
`Cout` whether it is a perfect square or not. 

*/

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int squareRoot = 0;
    bool isPerfectSquare = false;

    while (squareRoot * squareRoot <= number) {
        if (squareRoot * squareRoot == number) {
            isPerfectSquare = true;
            break;
        }
        squareRoot++;
    }

    if (isPerfectSquare)
        std::cout << number << " is a perfect square\n";
    else
        std::cout << number << " is not a perfect square\n";

    return 0;
}
