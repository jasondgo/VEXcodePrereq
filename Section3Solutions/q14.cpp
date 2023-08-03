#include <iostream>


/*

Question 14:

Write a program to count the number of even and odd elements in an integer array. 
Print out both the count for the even and the odd numbers.


*/

void countEvenOdd(int arr[], int size) {
    int countEven = 0;
    int countOdd = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }

    std::cout << "Number of even elements: " << countEven << "\n";
    std::cout << "Number of odd elements: " << countOdd << "\n";
}

int main() {
    int arr[] = {7, 2, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    countEvenOdd(arr, size);

    return 0;
}
