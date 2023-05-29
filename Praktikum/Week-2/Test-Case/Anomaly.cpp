#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x^=array[i];
    }
    
    cout << x;
    return 0;
}
