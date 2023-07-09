#include <bits/stdc++.h>
using namespace std;
long long n,m,a[100005],b[100005];
int main()
{
    cin>>n>>m;
    for(long long i=1;i<=m;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    for(long long i=1;i<=n;i++)
    {
        if(b[i]==0)
            cout<<i<<' ';
    }
}

