#include <iostream>

using namespace std;

int collatz(int n, int test)
{
    if (n == 1)
    {
        return test;
    }

    if (n % 2 == 0)
    {
        return collatz(n / 2, test + 1);
    }
    else
    {
        return collatz(3 * n + 1, test + 1);
    }
}

int main()
{
    int n;
    cin >> n;
    int test = collatz(n, 0);
    cout << "Nilai yang dibutuhkan untuk mencapai 1: " << test << endl;
    return 0;
}
