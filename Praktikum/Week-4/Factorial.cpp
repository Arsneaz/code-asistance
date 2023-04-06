#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int Faktorial(int n, int mult)
{
	if (n <= 1)
    {
        return 1;
    }

    cout << mult << " * " << (n-1) << " = " << mult * (n-1) << endl;
    return n * Faktorial( (n-1), mult * (n-1) );
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    int x = Faktorial(n, n);
    cout << n << "! = " << x;
    return 0;
}
