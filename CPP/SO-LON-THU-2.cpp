#include<bits/stdc++.h>
using namespace std;
long long n,a[100004];
main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    for(long long i=n;i<=n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            cout<<a[i+1];
            return 0;
        } 
    }
}