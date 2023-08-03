#include <iostream>


/*

Question 29:

Write a program to count the number of vowels in an array of characters. 
Print out the numbers of vowels in the array.

*/

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int countVowels(char arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (isVowel(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    char arr[] = {'a', 'b', 'e', 'i', 'o'};
    int size = sizeof(arr) / sizeof(arr[0]);

    int vowelCount = countVowels(arr, size);
    std::cout << "Number of vowels in the array: " << vowelCount << "\n";

    return 0;
}
