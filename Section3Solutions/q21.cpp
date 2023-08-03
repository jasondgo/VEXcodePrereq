#include <iostream>

/*

Question 21:

Write a program to copy the elements of one integer array into another array. 
For example, if I have an array that contains 1,2,3, and then I have an empty array. 
When I copy the values of the first array to the empty one, I am placing the exact values of the first array into the exact same corresponding indices for the empty array. 
So after you're done copying, the previously empty array should look identical to the original array. Meaning it should look like 1,2,3 as well.


*/


void copyArray(int source[], int destination[], int size) {
    for (int i = 0; i < size; ++i) {
        destination[i] = source[i];
    }
}

int main() {
    int source[] = {1, 2, 3};
    int size = sizeof(source) / sizeof(source[0]);

    int destination[size];

    copyArray(source, destination, size);

    std::cout << "Copied Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << destination[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
