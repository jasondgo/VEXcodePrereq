#include <iostream>


/*

Question 2:

Create a function to calculate the average of three decimal numbers. 
Pass three decimal values as arguments and return the average to be printed.

*/


double calculateAverage(double num1, double num2, double num3) {
    return (num1 + num2 + num3) / 3.0;
}

int main() {
    double num1, num2, num3;
    std::cout << "Enter three decimal numbers: ";
    std::cin >> num1 >> num2 >> num3;

    double average = calculateAverage(num1, num2, num3);
    std::cout << "Average of " << num1 << ", " << num2 << ", and " << num3 << " is: " << average << "\n";

    return 0;
}
