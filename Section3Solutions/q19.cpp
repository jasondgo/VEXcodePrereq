#include <iostream>


/*

Create a program to count the number of occurrences of a given character in an array of characters. 
Print out the letter you are looking for and how many times it occurred in the array.

*/

int countCharacterOccurrences(char arr[], int size, char target) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    char arr[] = {'a', 'b', 'c', 'b', 'a'};
    int size = sizeof(arr) / sizeof(arr[0]);
    char target;

    std::cout << "Enter the character to count: ";
    std::cin >> target;

    int occurrences = countCharacterOccurrences(arr, size, target);
    std::cout << "Character '" << target << "' occurred " << occurrences << " times in the array.\n";

    return 0;
}
