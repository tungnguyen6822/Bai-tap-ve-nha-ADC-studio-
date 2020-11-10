#include<iostream>
using namespace std;
int main(){
	int n,i, Tong=0;
	cout<<" Nhap so n ban can kiem tra: ";
	cin >> n;
	for(i=1 ;i<=(n/2); i++){
	    if(n%i==0)
	    Tong+=i;
	}//for
	if(Tong==n)
	   cout<<" So "<<n<<" la so hoan hao";
	else
	   cout<<" So "<<n<<" la so khong hoan hao";
return 0;
}//main
