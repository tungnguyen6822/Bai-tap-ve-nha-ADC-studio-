#include <iostream>
using namespace std;
int main()
{
   int n, i=2, j,kt;
   cout<<" Nhap so n: ";
   cin >>n;
   while (i<=n)
   {
    kt =1;
    if (i!=0 && i!=1)
	{
        j=2;
        while (j<=i/2)
		{
            if (i%j ==0 )
			{
                kt=2;
                break;
            }//if1
            j++;
        }//while1
    }else {
        kt=0;
    }//else
    if(kt==1){
        cout<<i<<" ";
    }//if2
    i++;
   }// while2
   cout<<" la cac so nguyen to thuoc khoang "<< n;
   
return 0;
}//main

