#include<iostream>
using namespace std;
int main()
{
	int i,n,j;
	cout<<" nhap so n: ";
	cin >>n;
	for(i=1; i<=n;i++)
	{
		for(j=1; j<=n; j++)
		    if (/*i==1||i==n||*/j==1||j==n)
			{
			cout<<" * ";
		    }
		    else
		    cout<<"   ";
	cout<<endl;
	}
	return 0;
}
