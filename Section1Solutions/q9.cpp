#include <iostream>

/*

Question 9: 

Develop a program that prompts the user to enter two integers. 
Store the values in variables and swap their values. Display the swapped values using `cout`.


*/



int main() {
    int num1, num2;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    std::cout << "Before swapping - First integer: " << num1 << ", Second integer: " << num2 << "\n";

    // Swapping the values
    int temp = num1;
    num1 = num2;
    num2 = temp;

    std::cout << "After swapping - First integer: " << num1 << ", Second integer: " << num2 << "\n";

    return 0;
}
