#include <iostream>


/*

Question 20:

Implement a program to find the average of elements at even and odd indices in an array of integers separately. Count index 0 as an even number. 
For example, if I had an array of values 1,2,3,4, the even index values (0 and 2) hold the values 1 and 3. 
The odd index values (1 and 3) hold the values 2 and 4. 
Therefore the average of the even index values is (1 + 3) / 2 = 2 and the average of the odd index values is (2 + 4) / 2 = 3. 
Print out the average for both the even and odd indices. 

*/


void calculateEvenOddIndexAverages(int arr[], int size) {
    double evenSum = 0.0;
    double oddSum = 0.0;
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < size; ++i) {
        if (i % 2 == 0) {
            evenSum += arr[i];
            evenCount++;
        } else {
            oddSum += arr[i];
            oddCount++;
        }
    }

    double evenAverage = (evenCount > 0) ? (evenSum / evenCount) : 0.0;
    double oddAverage = (oddCount > 0) ? (oddSum / oddCount) : 0.0;

    std::cout << "Average of elements at even indices: " << evenAverage << "\n";
    std::cout << "Average of elements at odd indices: " << oddAverage << "\n";
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    calculateEvenOddIndexAverages(arr, size);

    return 0;
}
