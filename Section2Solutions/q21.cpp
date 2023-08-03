#include <iostream>

/*

Question 21:

Write a program to print out all Armstrong numbers between 1 and 500. 
If the sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. 
For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )

*/


int main() {
    std::cout << "Armstrong numbers between 1 and 500:\n";

    int number = 1;

    while (number <= 500) {
        int originalNumber = number;
        int sum = 0;

        while (originalNumber != 0) {
            int digit = originalNumber % 10;
            sum += digit * digit * digit;
            originalNumber /= 10;
        }

        if (sum == number) {
            std::cout << number << " ";
        }

        number++;
    }

    std::cout << "\n";

    return 0;
}
