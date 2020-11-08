#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<" Nhap so a: \n ";
	cin >> a;
	cout<<" Nhap so b: \n ";
	cin >> b;
	if(a<0&&b<0)
	  cout<<" So a va b cung dau ";
	if(a>0&&b>0)
	  cout<<" So a va b cung dau ";
	if(a<0&&b>0)
	  cout<<" So a va b khac dau ";
	if(a>0&&b<0)
	  cout<<" So a va b khac dau ";
return 0;
}
