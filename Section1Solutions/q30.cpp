#include <iostream>

/*

Question 30:

Write a program that prompts the user to enter the number of gear teeth on two gears in a gear train. 
Store the values in variables and calculate the gear ratio using the formula 
`gear_ratio = teeth1 / teeth2`. Display the gear ratio using `cout`.


*/



int main() {
    double teeth1, teeth2;

    std::cout << "Enter the number of teeth on gear 1: ";
    std::cin >> teeth1;

    std::cout << "Enter the number of teeth on gear 2: ";
    std::cin >> teeth2;

    double gear_ratio = teeth1 / teeth2;

    std::cout << "Gear ratio: " << gear_ratio << "\n";

    return 0;
}
