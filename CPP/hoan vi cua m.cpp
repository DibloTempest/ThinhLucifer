#include<bits/stdc++.h>
using namespace std;
long long n,m=1e9,x=1,a[1000006];
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    for(long long i=1;i<=n;i++)
    {
        if (a[i]==a[i-1])
            continue;
        m=min(m,a[i]-2*x+n);
        x++;
    }
    cout<<m;
}

