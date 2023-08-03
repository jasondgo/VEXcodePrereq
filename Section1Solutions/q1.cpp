#include <iostream>

/*

Question 1:

Write a program that prompts the user to enter their name and age. 
Store the name in a variable and the age in another variable. 
Display the information using `cout`. Variable names should be relevant.

*/

int main() {
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";

    return 0;
}
