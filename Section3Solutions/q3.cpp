#include <iostream>


/*

Question 3:

Implement a function to check if a given number is even or odd. 
Pass an integer as an argument and print whether it is even or odd. 
DO NOT RETURN a value.

*/


void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        std::cout << num << " is even.\n";
    } else {
        std::cout << num << " is odd.\n";
    }
}

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    checkEvenOdd(num);

    return 0;
}
