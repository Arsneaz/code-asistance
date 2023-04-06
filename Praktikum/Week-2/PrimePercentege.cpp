#include <iostream>
using namespace std;

bool prima(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int jumlahPrima = 0;
    for (int i = 0; i < n; i++)
    {
        if (prima(arr[i]))
        {
            cout << arr[i] << " ";
            jumlahPrima++;
        }
    }
    double persenPrima = (jumlahPrima * 100.0) / n;

    cout << "\nPersentase bilangan prima adalah: " << persenPrima << "%\n";
    return 0;
}
