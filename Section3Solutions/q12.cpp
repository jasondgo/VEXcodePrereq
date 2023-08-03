#include <iostream>

/*

Question 12:

Write a program to find the sum of all elements in an integer array. 
Pass an integer array and return the sum of all the elements to be printed.

*/

int findSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {7, 2, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = findSum(arr, size);
    std::cout << "Sum of elements in the array: " << sum << "\n";

    return 0;
}
