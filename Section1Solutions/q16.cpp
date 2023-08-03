#include <iostream>

/*

Question 16:

Write a program that asks the user to enter the principal amount, interest rate, and time period (in years) for a simple interest calculation. 
Store the values in variables and calculate the simple interest using the formula `interest = (principal * rate * time) / 100`. 
Display the interest using `cout`.

*/



int main() {
    double principal, rate, time;

    std::cout << "Enter the principal amount: ";
    std::cin >> principal;

    std::cout << "Enter the interest rate: ";
    std::cin >> rate;

    std::cout << "Enter the time period in years: ";
    std::cin >> time;

    double interest = (principal * rate * time) / 100;

    std::cout << "Simple interest: " << interest << "\n";

    return 0;
}
