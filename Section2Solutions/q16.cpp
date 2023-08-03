#include <iostream>

/*

Question 16:

Write a program that prints the right triangle shape out of asterisks. Right triangle must have a base width of 5 stars.

Ex.	    *
      	**
      	***
      	****
      	*****


*/

int main() {
    std::cout << "Right triangle shape:\n";

    int rowCount = 1;

    while (rowCount <= 5) {
        int starCount = 1;

        while (starCount <= rowCount) {
            std::cout << "*";
            starCount++;
        }

        std::cout << "\n";
        rowCount++;
    }

    return 0;
}
