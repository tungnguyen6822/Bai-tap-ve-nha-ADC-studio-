#include<iostream>
using namespace std;
int main(){
	int a,b,i,tong=0;
	cout<<" Nhap so a: "; cin>> a;
	cout<<" Nhap so b: "; cin>> b;
	if(a%3==0 && b%3==0){ 
		tong=a+b;
	    cout<<" So le la "<< a <<" va "<< b <<endl;
	    cout<<" Tong 2 so le la "<< tong <<endl;
	}//if1
	if(a%3!=0 && b%3==0){
		tong=b;
		cout<<" So le la "<< b <<endl;
		cout<<" Tong la "<< tong <<endl;
	}//if2
	if(a%3==0 && b%3!=0){
		tong=a;
		cout<<" So le la "<< a << endl;
		cout<<" Tong la "<< tong << endl; 
	}//if3
	if(a%3!=0 && b%3!=0)
	    cout<<" 2 so khong phai so le ";
return 0; 
}























