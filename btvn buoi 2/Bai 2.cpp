#include<iostream>
using namespace std;
int main(){
   int a,b,c,d, Tong;
   cout<<" Nhap 4 chu so : ";
   cin >>a >>b >>c >>d;
   
   Tong=((a+b+c+d)/100)%10;
   cout<<" Hang don vi cua tong 4 so la: "<< Tong;
return 0;
}// main
