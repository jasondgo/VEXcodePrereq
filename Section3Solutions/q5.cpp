#include <iostream>

/*

Question 5:

Write a function to find the minimum element in an array of integers. 
Pass an array as an argument to the function and print out the minimum element ONLY. 
DO NOT RETURN a value.

*/


void findMinimum(int arr[], int size) {
    int minElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    std::cout << "Minimum element in the array: " << minElement << "\n";
}

int main() {
    int arr[] = {7, 2, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    findMinimum(arr, size);

    return 0;
}
