#include <iostream>
using namespace std;

// Izračunati zbir  cifara unijetog cijelog broja.

int main() {
 int a;
 int x = 0;
 int b = 1;

 cout<<"Unesite jedan broj: ";
 cin>> a;

 while (b!=0){
   if (a!=0){
     x = x + a % 10;
     a = a /10; 
   }
   else{
     cout<<"Zbir cifara je "<< x;
     break;
   }
 }
 return 0;
}