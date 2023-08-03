#include <iostream>

/*

Question 1:

Write a function to find the sum of two integers. 
Pass two integers as arguments and return the sum to main to be printed.

*/

int findSum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    int sum = findSum(num1, num2);
    std::cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << "\n";

    return 0;
}
