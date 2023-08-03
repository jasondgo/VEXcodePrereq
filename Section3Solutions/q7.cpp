#include <iostream>


/*

Question 7:

Create a function to calculate the square of a given number. 
Take a decimal value as an argument and return the square of it to be printed.

*/

double square(double num) {
    return num * num;
}

int main() {
    double num;
    std::cout << "Enter a decimal number: ";
    std::cin >> num;

    double squareResult = square(num);
    std::cout << "Square of " << num << " is: " << squareResult << "\n";

    return 0;
}
