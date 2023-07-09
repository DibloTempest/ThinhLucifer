#include <bits/stdc++.h>

using namespace std;
unsigned long long f[1000006];
long long n,k,a[1000006],b=1e18;
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]+=a[i-1];
    }
    for(long long i=1;i<=n;i++)
    b=min(b,abs(a[n]-2*a[i]));
    cout<<b;
}
