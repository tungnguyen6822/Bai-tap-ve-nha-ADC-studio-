#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,n,max;
	max=a;
	cout<<" Nhap so N gom 5 chu so: ";
	cin >>n;
	a=(n/10000)%10;
	b=(n/1000)%10;
	c=(n/100)%10;
	d=(n/10)%10;
	e=n%10;
	if(b>a && c>a && d>a && e>a){
	  if(b>c && b>d && b>e)
	    max=b;
	  if(c>b && c>d && c>e)
	    max=c;
	  if(d>b && d>c && d>e)
	    max=d;
	  if(e>b && e>d && e>c)
	    max=e;
}//if1
    if(max==a)//1
       cout<<" So lon nhat nam o hanh chuc nghin ";
    else //1
      if(max==b)//2
         cout<<" so lon nhat nam o hang nghin ";
          else//2
            if(max==c)//3
               cout<<" So lon nhat nam o hang tram ";
                else//3
                  if(max==d)//4
                    cout<<" So lon nhat nam o hang chuc ";
                     if(max==e)
                       cout<<" So lon nhat nam o hang don vi ";
return 0;
}
