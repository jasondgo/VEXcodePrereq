#include <iostream>


/*

Question 8:

Implement a function to find the sum of all elements in an array.
Pass an integer array as an argument and print out the sum. DO NOT RETURN a value.


*/

void findSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    std::cout << "Sum of elements in the array: " << sum << "\n";
}

int main() {
    int arr[] = {7, 2, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    findSum(arr, size);

    return 0;
}
