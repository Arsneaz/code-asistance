#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isVocal(char ch)
{
    switch(ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        return true;
    default:
        return false;
    }
}

void Vocal(string text[], int n, int *max_vocal, string *max_string)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        
        for (int j = 0, m = text[i].length(); j < m; j++)
        {
            if(isVocal(text[i][j]))
            {
                sum++;
            }
        }

        if (*max_vocal < sum)
        {
            *max_vocal = sum;
            *max_string = text[i];
        }
    }
}


int main() {
    int n; cin >> n; int max_vocal = 0;
    string word[n]; string max_string = "";
    for (int i =0; i < n; i++)
    {
        getline(cin >> ws, word[i]);
    }
    
    Vocal(word, n, &max_vocal, &max_string);
    cout << "Jumlah huruf Vokal dalam teks :" << max_vocal << " dalam teks : " << max_string << endl;

    return 0;
}
