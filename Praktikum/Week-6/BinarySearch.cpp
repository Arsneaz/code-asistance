#include <iostream>

using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1;
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == key) {
        return mid;
    } else if (arr[mid] < key) {
        return binarySearch(arr, mid + 1, high, key);
    } else {
        return binarySearch(arr, low, mid - 1, key);
    }
}

int main() {
    int arr[] = {1,3,5,7,9,11,13,15,17,18};
    int n = 10;
    int key; cin >> key;
    int index = binarySearch(arr, 0, n - 1, key);
    if (index != -1) {
        cout << "Found " << key << " at index " << index << endl;
    } else {
        cout << "Could not find " << key << endl;
    }
    return 0;
}
