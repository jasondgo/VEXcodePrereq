#include <iostream>
/*

Question 23a.

Print out the following patterns using a while loop.



        1
      222
    33333
  4444444
555555555


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
        }

        std::cout << "\n";
        row++;
        spaces--;
    }

    return 0;
}
