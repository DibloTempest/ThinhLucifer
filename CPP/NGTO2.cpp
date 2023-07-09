#include <bits/stdc++.h>
using namespace std;
long long tinh_tong_cac_chu_so(long long a)
{
    long long t=0;
    while(a!=0){
        t+=a%10;
        a/=10;
    }
    return t;
}
bool ktra(long long n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0 ) return false;
    }
    return true;
}
long long n,dem;
int main()
{
    freopen("NGTO2.inp","r",stdin);
    freopen("NGTO2.out","w",stdout);
    cin>>n;
    if(ktra(tinh_tong_cac_chu_so(n)))
        cout<<"YES";
    else cout<<"NO";
}


