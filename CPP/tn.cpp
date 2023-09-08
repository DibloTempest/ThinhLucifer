
#include<bits/stdc++.h>
using namespace std;
long long n,t,sum=1,a[10000007];
int main()
{

    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    t=a[1];
    for(long long i=2;i<=n;i++)
    {
        t=(a[i]*t)/__gcd(a[i],t);
    }
    cout<<t<<endl;
    for(long long i=1;i<=n;i++)
    {
        cout<<t/a[i]<<' ';
    }
}
