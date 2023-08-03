#include <iostream>


/*

Question 18:

Write a program to find the index of a specific element in an array. 
For example, for an array that holds the values 1,2,3, if I am searching for the value 2, then the program should return that it is located at index 1.
If the value exists in the array, print out the index. If it does not exist, print out the value does not exist.

*/

int findElementIndex(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    std::cout << "Enter the value to search for: ";
    std::cin >> target;

    int index = findElementIndex(arr, size, target);
    if (index != -1) {
        std::cout << "Value " << target << " exists at index " << index << "\n";
    } else {
        std::cout << "Value " << target << " does not exist in the array.\n";
    }

    return 0;
}
