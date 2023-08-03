#include <iostream>

/*

Question 17:

Write a program to calculate the total expenses.
Quantity and price per item are input by the user and a discount of 10% is offered if the expense is more than 5000. 
`Cout` the final total.

*/

int main() {
    int quantity;
    double pricePerItem;
    std::cout << "Enter quantity: ";
    std::cin >> quantity;
    std::cout << "Enter price per item: ";
    std::cin >> pricePerItem;

    double totalExpenses = quantity * pricePerItem;

    if (totalExpenses > 5000) {
        totalExpenses -= totalExpenses * 0.1;
    }

    std::cout << "Total expenses: " << totalExpenses << "\n";

    return 0;
}
