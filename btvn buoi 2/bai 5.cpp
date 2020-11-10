#include <iostream>

using namespace std;

int main()
{
    int n, S=0;
    cout<<"Nhap so n: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        S=S+2*i+1;
    }cout<<"S("<<n<<")="<<S;
    return 0;
}
