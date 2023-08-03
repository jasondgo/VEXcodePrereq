#include <iostream>


/*

Question 25:

Create a program to shift the elements of an integer array to the left by 1 position. 
The element at the end of the array should “wrap around” and become the first element. 
Print out the shifted array.


*/


void shiftLeft(int arr[], int size) {
    int temp = arr[0];
    for (int i = 1; i < size; ++i) {
        arr[i - 1] = arr[i];
    }
    arr[size - 1] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    shiftLeft(arr, size);

    std::cout << "Shifted Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
