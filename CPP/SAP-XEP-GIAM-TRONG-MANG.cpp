#include<bits/stdc++.h>
using namespace std;
long long n,a[1000004];
main()
{
    cin>>n;
    for(long long i=1;i<=n;i++) 
        cin>>a[i];
    sort(a+1,a+n+1,greater<long long>());
    for(long long i=1;i<=n;i++) 
        cout<<a[i]<<" ";
}