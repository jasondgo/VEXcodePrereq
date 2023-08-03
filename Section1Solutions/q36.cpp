#include <iostream>

/*

Question 36:

Create a program that prompts the user to enter the time taken and distance traveled by an object. 
Store the values in variables and calculate the average speed using the formula `average_speed = distance / time`. 
Display the average speed using `cout`.

*/

int main() {
    double time, distance;

    std::cout << "Enter the time taken (in seconds): ";
    std::cin >> time;

    std::cout << "Enter the distance traveled: ";
    std::cin >> distance;

    double average_speed = distance / time;

    std::cout << "Average speed: " << average_speed << "\n";

    return 0;
}
