#include<iostream>
using namespace std;
int main(){
	int a,b,c,max;
	max=a;
	cout<<" Nhap A, B, C tuong ung: ";
	cin >> a >> b>> c;
	if(b>a && c>a){
	  if(b>c)
	    max=b;
	  else 
	    max=c;
    }
    if(max==a)
      cout<<" So lon nhat la "<< max;
    if(max==b)
      cout<<" So lon nhat la "<< max;
    if(max==c)
      cout<<" So lon nhat la "<< max;
      
}
