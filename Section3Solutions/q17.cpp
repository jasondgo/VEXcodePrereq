#include <iostream>


/*

Question 17:

Create a program to check if an array is sorted in ascending order. 
Ascending Order: 1,2,3,4, etc. Print out whether the integers in the array are in ascending order or not.

*/

bool isSortedAscending(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 7, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isSortedAscending(arr, size)) {
        std::cout << "The array is sorted in ascending order.\n";
    } else {
        std::cout << "The array is not sorted in ascending order.\n";
    }

    return 0;
}
