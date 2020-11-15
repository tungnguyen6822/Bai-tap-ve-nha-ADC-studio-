#include<iostream>
using namespace std;

void NhapMang(int a[], int &n){
    cout<<" Nhap so phan tu: "; 
    cin >>n;
    for(int i=0; i<=n; i++){
    	cout<<"N["<<i<<"]=";
    	cin >> a[i];
	}
}

void HienMang(int a[], int n){
	cout<<"\nMang ban vua nhap la: ";
	for(int i=0; i<=n; i++){
    	cout<< a[i] <<" ";
    }
}

int ChenKiTu(int a[],int &n, int k, int x){
	for(int i=n; i>k; i-- ){
		a[i]=a[i-1];
		a[k]=x;
    	n++;
	}
	
}

void XuatMang(int a[], int &n){
	for(int i=0; i<n; i++){
		cout<< a[i] <<" ";
	}
}

int main(){
	int a[50],n;
	int k,x;
	NhapMang(a,n);
	HienMang(a,n);
	cout<<"\nNhap gia tri can chen: "; cin>> x;
	cout<<"\nNhap vi tri can chen: "; cin>> k;
	ChenKiTu(a,n,k,x);
	XuatMang(a,n);
	
return 0;
}
