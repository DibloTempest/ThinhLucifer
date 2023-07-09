#include<bits/stdc++.h>
using namespace std;
long long n,k,a[100004],s=0;
main()
{
    cin>>n>>k;
    for(long long i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    for(long long i=n;i>=n-k+1;i--)
    {
        s=s+a[i];
    }
    cout<<s;
}