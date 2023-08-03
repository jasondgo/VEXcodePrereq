#include <iostream>


/*

Question 22: 

Create a program to find the product of all elements in a floating-point array. Print out the product.

*/

double calculateProduct(float arr[], int size) {
    double product = 1.0;
    for (int i = 0; i < size; ++i) {
        product *= arr[i];
    }
    return product;
}

int main() {
    float arr[] = {1.5, 2.0, 3.5};
    int size = sizeof(arr) / sizeof(arr[0]);

    double product = calculateProduct(arr, size);
    std::cout << "Product of elements in the array: " << product << "\n";

    return 0;
}
