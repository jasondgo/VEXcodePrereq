#include <iostream>

/*

Question 6:

Implement a function to compute the factorial of a non-negative integer. 
Pass a non-negative integer as an argument. Return the factorial value to be printed.

*/

int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;

    int fact = factorial(num);
    std::cout << "Factorial of " << num << " is: " << fact << "\n";

    return 0;
}
