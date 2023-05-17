#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sortArray(vector<int>& arr) {
    // Create two vectors to hold even and odd numbers
    vector<int> evens, odds;
    for (int num : arr) {
        if (num % 2 == 0) {
            evens.push_back(num);
        } else {
            odds.push_back(num);
        }
    }
    // Sort the even vector in ascending order
    sort(evens.begin(), evens.end());
    // Sort the odd vector in ascending order
    sort(odds.begin(), odds.end());
    // Concatenate the two vectors and return the result
    evens.insert(evens.end(), odds.begin(), odds.end());
    return evens;
}

int main() {
    vector<int> arr;
    int N; cin >> N;
    for (int i = 0; i < N; i++)
    {
        int j; cin >> j;
        arr.push_back(j);
    }
    vector<int> sorted_arr = sortArray(arr);
    for (int num : sorted_arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
