#include <iostream>


/*

Question 11:

Implement a function to find the second largest element in an array of integers. 
Pass an integer array and return the second largest element to be printed.

*/


int findSecondLargest(int arr[], int size) {
    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {7, 2, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);
    std::cout << "Second largest element in the array: " << secondLargest << "\n";

    return 0;
}
