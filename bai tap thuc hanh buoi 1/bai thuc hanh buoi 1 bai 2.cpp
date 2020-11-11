#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<" nhap so N: ";
	cin >>n;
	if(n%2==0 && n%3==0)
	   cout<<" so "<<n<<" chia het cho ca 2 va 3 ";
	else{
	if(n%2==0)
	   cout<<" so "<<n<<" chia het cho 2 ";
	if(n%3==0)
	   cout<<" so "<<n<<" chia het cho 3 ";
	   }
	   
return 0;
}
