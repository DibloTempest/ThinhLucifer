#include <bits/stdc++.h>
using namespace std;
long long n,a[1003],dem;
bool ktr_snt(long long n)
{
        for(long long i=2;i<= sqrt(n);i++)
        {
            if(n%i==0)
                return false;
        }
    return n>1;
}
long long tinh_tong_cac_chu_so(long long a)
{
    long long t=0;
    while(a!=0){
        t+=a%10;
        a/=10;
    }
    return t;
}
int main()
{
	cin >> n;
	for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        if(ktr_snt(tinh_tong_cac_chu_so(a[i])))
            dem+=1;
    }
    cout<<dem;
}
