#include<iostream>
using namespace std;
int main(){
	int dl,dn,h,s;
	cout<<" Nhap do dai day lon: "; cin>> dl;
	cout<<" Nhap do dai day nho: "; cin>> dn;
	cout<<" Nhap chieu cao: "; cin>> h;
	
	s=((dl+dn)*h)/2;
	cout<<" Dien tich hinh thang la: "<< s;
return 0;
}
