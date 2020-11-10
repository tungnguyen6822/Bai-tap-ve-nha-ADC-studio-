#include<iostream>
using namespace std;
int main(){
	int n,a,b,c,tong;
	cout<<" Nhap so N: ";
	cin >>n;
	a=(n/100)%10;
	b=(n/10)%10;
	c=n%10;
	if(0<n && n<=109){
	   tong= a+b+c;
	   cout<<" Tong cac chu so la: "<< tong;
	}//if
	else
	   cout<<" So ban nhap khong co trong khoang nghiem ";
}//main
