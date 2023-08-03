#include <iostream>


/*

Question 24:

Write a program to find the prime numbers in an integer array. Print out each prime number found.

*/


bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void findPrimes(int arr[], int size) {
    std::cout << "Prime numbers in the array: ";
    for (int i = 0; i < size; ++i) {
        if (isPrime(arr[i])) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << "\n";
}

int main() {
    int arr[] = {2, 7, 4, 11, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    findPrimes(arr, size);

    return 0;
}
