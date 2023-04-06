#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

using namespace std;

typedef struct racer
{
    string name;
    string team;
    float stats;
} racer;
// 

int main()
{
        racer driver[3];
        for (int i = 0; i < 3; i++)
        {
            getline(cin >> ws, driver[i].name);
            getline(cin >> ws, driver[i].team);
            cin >> driver[i].stats;
        }

        // for (int i = 0; i < 3; i++)
        // {
        //     for (int j = 0; j < 3-i; j++)
        //     {
        //         if (driver[j].stats < driver[j+1].stats)
        //         {
        //             racer temp = driver[j];
        //             driver[j] = driver[j+1];
        //             driver[j+1] = temp;
        //         }
        //     }
        // }

        racer first = driver[0];
        racer second = driver[1];
        racer third = driver[2];

        if (first.stats < second.stats)
        {
            racer temp = first;
            first = second;
            second = temp;
        }
        if (first.stats < third.stats)
        {
            racer temp = first;
            first = third;
            third = temp;
        }
        if (second.stats < third.stats)
        {
            racer temp = second;
            second = third;
            third = temp;
        }

        cout << first.name <<" from " << first.team <<" wins the Grand Prix\n";
        cout << "Podium:\n";
        cout << "Second place: " << second.name << endl;
        cout << "Third place: " << third.name << endl;

    return 0;
}