#include <iostream>

/*

Question 13:

Create a program to calculate the average of elements in a floating-point array. 
Print out the average.

*/


double calculateAverage(float arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    float arr[] = {3.5, 2.1, 7.8, 4.2, 1.9};
    int size = sizeof(arr) / sizeof(arr[0]);

    double average = calculateAverage(arr, size);
    std::cout << "Average of elements in the array: " << average << "\n";

    return 0;
}
