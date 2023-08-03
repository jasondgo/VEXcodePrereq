#include <iostream>


/*

Question 30:

Create a program to find the difference between the maximum and minimum elements in an integer array. 
Print out the difference.

*/


int findDifference(int arr[], int size) {
    int minElement = arr[0];
    int maxElement = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    return maxElement - minElement;
}

int main() {
    int arr[] = {5, 2, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int difference = findDifference(arr, size);
    std::cout << "Difference between maximum and minimum elements: " << difference << "\n";

    return 0;
}
