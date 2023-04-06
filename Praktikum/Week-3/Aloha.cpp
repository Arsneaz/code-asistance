#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct data{
    string nama;
    string prodi;
    int semester;
    string hobi;
};

int main() {
     data x;
    
    getline(cin, x.nama);
    getline(cin, x.prodi);
    cin >> x.semester;
    cin.ignore();
    getline(cin, x.hobi);

    cout <<"Hi, nama saya " <<x.nama <<"."<< endl;
    cout <<"Saya berasal dari prodi " <<x.prodi <<" dan sekarang semester " <<x.semester<<"." << endl;
    cout << "Hobi saya adalah "<<x.hobi<<"." << endl;
    cout<<"Senang berkenalan denganmu.";

    return 0;
}
