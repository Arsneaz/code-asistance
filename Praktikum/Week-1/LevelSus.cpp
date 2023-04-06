#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool am = (n % 2 == 0);
    bool om = (n % 3 == 0);
    bool gus = (n % 5 == 0);
    bool sus = (n % 7 == 0);

    if (am) {
        cout << "Am" << endl;
    }
    if (om) {
        cout << "Om" << endl;
    }
    if (gus) {
        cout << "Gus" << endl;
    }
    if (sus) {
        cout << "Sus" << endl;
    }

    return 0;
}
