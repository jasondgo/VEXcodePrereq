#include <iostream>

/*

Question 6:

Write a program that calculates the total cost of an online shopping cart. 
Prompt the user to enter the price and quantity of three items. 
Store the values in variables and display the total cost using `cout`.


*/



int main() {
    double price1, price2, price3;
    int quantity1, quantity2, quantity3;

    std::cout << "Enter the price of item 1: ";
    std::cin >> price1;

    std::cout << "Enter the quantity of item 1: ";
    std::cin >> quantity1;

    std::cout << "Enter the price of item 2: ";
    std::cin >> price2;

    std::cout << "Enter the quantity of item 2: ";
    std::cin >> quantity2;

    std::cout << "Enter the price of item 3: ";
    std::cin >> price3;

    std::cout << "Enter the quantity of item 3: ";
    std::cin >> quantity3;

    double totalCost = (price1 * quantity1) + (price2 * quantity2) + (price3 * quantity3);

    std::cout << "Total cost: " << totalCost << "\n";

    return 0;
}
