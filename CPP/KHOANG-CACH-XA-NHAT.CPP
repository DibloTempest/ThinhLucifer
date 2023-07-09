#include <bits/stdc++.h>
using namespace std;
long long n,m=-1e9,a[1000006];
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    cout<<abs(a[n]-a[1]);
}

