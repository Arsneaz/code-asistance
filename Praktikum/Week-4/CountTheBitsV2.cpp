#include <iostream>
using namespace std;

int count_bit_0(int n) {
    if (n == 0) {
        return 0;
    }
    int count = count_bit_0(n/2);
    if (n % 2 == 0) {
        count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout<< count_bit_0(n) << endl;
    return 0;
}
