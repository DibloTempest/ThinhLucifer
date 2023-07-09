#include <bits/stdc++.h>
using namespace std;
long long n,a[100005];
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
        if(a[i]!=a[i+1]-1)
            return cout<<"NO",0;
    }
    cout<<"YES";




}
