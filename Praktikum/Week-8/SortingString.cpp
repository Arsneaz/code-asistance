#include <iostream>
#include <string>

// Bubble Sort algorithm to sort an array alphabetically
void bubbleSort(std::string arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int size; std::cin >> size;
    std::string myList[size];
    for (int i = 0; i < size; i++)
    {
		std::cin >> myList[i];
    }

    // Sorting the array alphabetically using Bubble Sort
    bubbleSort(myList, size);

    // Printing the sorted array
    for (int i = 0; i < size; i++) {
        std::cout << myList[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
