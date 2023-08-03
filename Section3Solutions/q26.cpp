#include <iostream>


/*

Question 26:

Implement a program to check if an array contains duplicate elements. Print out whether the array contains duplicate elements or does not.

*/

bool containsDuplicates(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (containsDuplicates(arr, size)) {
        std::cout << "The array contains duplicate elements.\n";
    } else {
        std::cout << "The array does not contain duplicate elements.\n";
    }

    return 0;
}
