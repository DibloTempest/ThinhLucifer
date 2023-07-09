#include <bits/stdc++.h>
using namespace std;
long long n,m=1e9,l=1e9,a[10000000];
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    cout<<a[n/2+1];

}

