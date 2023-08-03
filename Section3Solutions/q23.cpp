#include <iostream>

/*

Question 23: 

Implement a program to check if an array is a palindrome (reads the same forward and backward). 
For example, the array 1,2,3,2,1 would be considered a palindrome. 
The array 1,4,5,6,1 would NOT be considered a palindrome.

*/

bool isPalindrome(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        if (arr[i] != arr[size - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isPalindrome(arr, size)) {
        std::cout << "The array is a palindrome.\n";
    } else {
        std::cout << "The array is not a palindrome.\n";
    }

    return 0;
}
