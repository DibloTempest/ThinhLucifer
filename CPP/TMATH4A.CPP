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
long long n,dem;
int main()
{
    cin>>n;
    for(long long i=1;i<=100000008;i++)
    {
        if(tinh_tong_cac_chu_so(i)==10)
            dem++;
        if(dem==n)
            return cout<<i,0;

    }
}

