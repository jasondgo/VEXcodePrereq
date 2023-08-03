#include <iostream>

/*

Question 18: 

Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered by the user. 
A triangle is valid if the sum of all the three angles is equal to 180 degrees. 
`Cout` whether the triangle is valid or not.

*/

int main() {
    int angle1, angle2, angle3;
    std::cout << "Enter the three angles of the triangle: ";
    std::cin >> angle1 >> angle2 >> angle3;

    int sumOfAngles = angle1 + angle2 + angle3;

    if (sumOfAngles == 180) {
        std::cout << "The triangle is valid\n";
    } else {
        std::cout << "The triangle is not valid\n";
    }

    return 0;
}
