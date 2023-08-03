#include <iostream>
/*

Question 11:

Write a program that determines the grade of a student based on their score using if-else statements. 
For example, if grade is above a 90 give an A, greater than 80 give B so on and so forth. 
`Cout` the grade.

*/
int main() {
    int score;
    std::cout << "Enter the score: ";
    std::cin >> score;

    char grade;

    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    std::cout << "The grade is: " << grade << "\n";

    return 0;
}
