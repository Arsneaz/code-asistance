#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int jumlah = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            jumlah++;
        }
        n /= 2;
    }

    cout << jumlah << endl;

    return 0;
}
