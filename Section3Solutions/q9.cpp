#include <iostream>

/*

Question 9:
Write a function to find the largest prime number smaller than a given positive integer. 
Pass a positive integer as an argument and print out the nearest prime number. DO NOT RETURN a value.



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

void findLargestPrime(int num) {
    for (int i = num - 1; i >= 2; --i) {
        if (isPrime(i)) {
            std::cout << "Largest prime smaller than " << num << ": " << i << "\n";
            return;
        }
    }
    std::cout << "No prime number smaller than " << num << "\n";
}

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    findLargestPrime(num);

    return 0;
}
