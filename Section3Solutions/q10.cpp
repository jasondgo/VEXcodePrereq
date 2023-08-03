#include <iostream>
#include <cmath>


/*

Question 10:

Write a function to calculate the area of a triangle given the lengths of its three sides. Use Heron’s formula. 
Pass three decimal values and return the final value to be printed.

*/


double calculateTriangleArea(double side1, double side2, double side3) {
    double s = (side1 + side2 + side3) / 2.0;
    return std::sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

int main() {
    double side1, side2, side3;
    std::cout << "Enter the lengths of the three sides of the triangle: ";
    std::cin >> side1 >> side2 >> side3;

    double area = calculateTriangleArea(side1, side2, side3);
    std::cout << "Area of the triangle: " << area << "\n";

    return 0;
}




