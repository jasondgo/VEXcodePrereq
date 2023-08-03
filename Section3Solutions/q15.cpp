#include <iostream>


/*

Question 15: 

Create a program to check if a given number exists in an array. 
Print out whether the number specified does or does not exist in the array.


*/


bool checkNumberExists(int arr[], int size, int num) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == num) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {7, 2, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int num;
    std::cout << "Enter a number to check: ";
    std::cin >> num;

    if (checkNumberExists(arr, size, num)) {
        std::cout << num << " exists in the array.\n";
    } else {
        std::cout << num << " does not exist in the array.\n";
    }

    return 0;
}
