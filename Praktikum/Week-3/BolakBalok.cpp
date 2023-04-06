#include <iostream>
using namespace std;

struct balok {
    float lebar;
    float tinggi;
    float panjang;
};

double volume (balok balok){
   return balok.panjang*balok.lebar*balok.tinggi;
  }
  
double keliling (balok balok){
   return 4*(balok.panjang+balok.lebar+balok.tinggi);
}
  
int main (){
  balok balok;
  
  cin>>balok.panjang;

  cin>>balok.lebar;
  
  cin>>balok.tinggi;

  cout<<"Volume balok adalah "<<volume(balok)<<endl;
  cout<<"Keliling balok adalah "<<keliling(balok)<<endl;
  return 0;
  
}