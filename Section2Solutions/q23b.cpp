#include <iostream>



/*

Question 23b:

Print out the following patterns using a while loop



        1
      212
    32123
  4321234
543212345


*/

int main() {
    int row = 1;
    int spaces = 4;

    while (row <= 5) {
        int spaceCount = 1;
        while (spaceCount <= spaces) {
            std::cout << " ";
            spaceCount++;
        }

        int digitCount = 1;
        int digit = row;
        while (digitCount <= (2 * row - 1)) {
            std::cout << digit;
            digitCount++;
            digit = (digit > 1) ? digit - 1 : digit + 1;
        }

        std::cout << "\n";
        row++;
        spaces--;
    }

    return 0;
}
