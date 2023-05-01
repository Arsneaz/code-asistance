#include <iostream>
#include <string>

using namespace std;

string peternak[] {"BO~O~O~O~O~O~", "~O~O~OO~O~B", "B~O~OO~O~O~", "O~~O~O~O~OB"};

int main() {
    string town; getline(cin, town);
    int count = 0;
    int i = 0;
    while (town[i] != '@') {
      switch (town[i]){
        case 'O': count++;
        case '~': i++;
        default : i++;
      }
    }
    i++;
    while (i < town.size()) {
      switch (town[i]){
        case '~': count++;
        case 'O': i++;
        default : i++;
      }
    }

    printf("%d domba tersesat.", count);
}