#include <bits/stdc++.h>
using namespace std;
long long n,m=1e9,a[1000006];
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(long long i=1;i<n;i++)
    {
        m=min(m,abs(a[i+1]-a[i]));
    }
    cout<<m;
}

