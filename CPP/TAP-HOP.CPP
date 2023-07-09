#include <bits/stdc++.h>

using namespace std;
long long n,t,d=0,m=0,d1=0;
long long a[200005],b[200005],a1[200005],b1[200005];
int main()
{
    cin>>n>>t;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]+=100000;
        a1[a[i]]++;
    }
    for(long long i=1;i<=t;i++)
    {
        cin>>b[i];
        b[i]+=100000;
        b1[b[i]]++;
    }
    for(long long i=1;i<=200005;i++)
    if(a1[i]>=1 || b1[i]>=1)
    d++;
    cout<<d<<" ";
    for(long long i=1;i<=200005;i++)
    if(a1[i]>=1 and b1[i]>=1)
    d1++;
    cout<<d1<<" ";



    return 0;
}
