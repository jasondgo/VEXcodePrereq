#include <iostream>


/*

Question 28: 

Implement a program to find the median of elements in an integer array. Print out the median value. 
(Hint. Use the bubble sort from the previous question to sort array)

*/

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

double findMedian(int arr[], int size) {
    bubbleSort(arr, size);

    if (size % 2 == 0) {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        return arr[size / 2];
    }
}

int main() {
    int arr[] = {3, 1, 4, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    double median = findMedian(arr, size);
    std::cout << "Median of elements in the array: " << median << "\n";

    return 0;
}
