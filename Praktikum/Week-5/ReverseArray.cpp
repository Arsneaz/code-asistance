#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

        int n; cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << "Array yang sudah dibalik" << endl;
        for (int i = n-1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        
    return 0;
}
