#include <iostream>


/*

Question 6:

Write a program that checks if a given year (above 400) is a leap year using if-else statements. 
`Cout` whether it is a leap year or not

*/


int main() {
    int year;
    std::cout << "Enter a year (above 400): ";
    std::cin >> year;

    if (year % 4 == 0) {
        std::cout << year << " is a leap year\n";
    } else {
        std::cout << year << " is not a leap year\n";
    }

    return 0;
}
