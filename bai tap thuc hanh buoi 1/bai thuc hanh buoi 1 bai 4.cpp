#include<iostream>
using namespace std;
int main(){
	int n,tong=0;
	cout<<" Nhap so nguyen N: ";
	cin >>n;
	while(n!=0){
		tong += n % 10;
		n /=10;
	}//while
	cout<<" Tong cua cac chu so "<<n<<" la "<<tong;
return 0;
}//main
	
	
