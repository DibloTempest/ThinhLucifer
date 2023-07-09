#include<bits/stdc++.h>
using namespace std;
long long n,m=-1e9,a[10000007];
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(long long i=1;i<=n;i++)
    {
        if(a[i]<=n-i+1)
            m=max(a[i],m);
    }
    if(m<-10000000)
        cout<<0;
    else
        cout<<m;
}

