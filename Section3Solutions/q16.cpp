#include <iostream>


/*

Question 16: 

Implement a program to reverse the order of elements in an integer array. 
Therefore, if the array holds the values 1,2,3 after the program runs it should hold 3,2,1. 
Print out the reversed array.

*/

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);

    std::cout << "Reversed Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
