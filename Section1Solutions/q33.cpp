#include <iostream>

/*

Question 33:

Develop a program that prompts the user to enter the number of seconds. 
Store the value in a variable and convert it to minutes and seconds format using integer division and modulus operations. 
Display the converted value using `cout`.

*/


int main() {
    int total_seconds;

    std::cout << "Enter the number of seconds: ";
    std::cin >> total_seconds;

    int minutes = total_seconds / 60;
    int seconds = total_seconds % 60;

    std::cout << "Converted time: " << minutes << " minutes " << seconds << " seconds" << "\n";

    return 0;
}
