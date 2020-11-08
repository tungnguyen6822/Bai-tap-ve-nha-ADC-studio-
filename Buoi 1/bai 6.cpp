#include<iosteam>
using namespace std;
int main(){
int n,m;
   cout<<" Nhap ngay sinh: "; cin>> n;
   cin >>" Nhap thang sinh: "; cin>> m;
   switch(a){
	 case(1):
	  (a<=19 && a<=31) ? cout<<"Ban la cung Ma Ket" : cout<<"Ban la cung Bao Binh";
	  break;
	 case(2):
	  (a<=18 && a<=28) ? cout<<"Ban la cung Bao Binh" : cout<<"Ban la cung Song Ngu";
	  break;
	 case(3):
	  (a<=20 && a<=31) ? cout<<"Ban la cung Song Ngu" : cout<<"Ban la cung Bach Duong";
	  break;
	 case(4):
	  (a<=19 && a<=30) ? cout<<"Ban la cung Bach Duong" : cout<<"Ban la cung Kim Nguu";
	  break;
	 case(5):
	  (a<=20 && a<=31) ? cout<<"Ban la cung Kim Nguu" : cout<<"Ban la cung Song Tu";
	  break;
	 case(6):
	  (a<=20 && a<=30) ? cout<<"Ban la cung Song Tu" : cout<<"Ban la cung Cu Giai";
	  break;
	 case(7):
	  (a<=22 && a<=31) ? cout<<"Ban la cung Cu Giai" : cout<<"Ban la cung Su Tu";
	  break;
	 case(8):
	  (a<=22 && a<=31) ? cout<<"Ban la cung Su Tu" : cout<<"Ban la cung Xu Nu";
	  break;
	 case(9):
	  (a<=22 && a<=30) ? cout<<"Ban la cung Xu Nu" : cout<<"Ban la cung Thien Binh";
	  break;
	 case(10):
	  (a<=22 && a<=31) ? cout<<"Ban la cung Thien Binh" : cout<<"Ban la cung Than Nong";
	  break;
	 case(11):
	  (a<=21 && a<=30) ? cout<<"Ban la cung Than Nong" : cout<<"Ban la cung Nhan Ma";
	  break;
	 case(12):
	  (a<=21 && a<=31) ? cout<<"Ban la cung Nhan Ma" : cout<<"Ban la cung Ma Ket";
	  break;
	default:
     cout<<" Ngay sinh ban nhap khong hop le \n Vui long thu lai ";
     break;
    }// switch
return 0;
}// main
