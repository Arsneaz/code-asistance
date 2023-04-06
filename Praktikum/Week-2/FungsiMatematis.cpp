#include <iostream>

using namespace std;

double exponen(double x, double y) {
    double result = 1;
    while (y > 0) {
        result *= x;
        y--;
    }
    return result;
}

int main() {
    int op;
    double x, y, hasil;
    cin >> op;
    cin >> x;
    cin >> y;
    switch(op) {
        case 0:
            hasil = x + y;
            break;
        case 1:
            hasil = exponen(x, y);
            break;
        case 2:
            hasil = x / y;
            break;
        default:
            cout << "Operasi diluar nalar :)" << endl;
            return 0;
    }
    cout << hasil << endl;
    return 0;
}
