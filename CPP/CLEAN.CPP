#include <bits/stdc++.h>
using namespace std;
long long n,dem,m=-1e9,a[101];
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(long long i=2;i<=n;i++)
    {
        dem=1;
        while(a[i]==a[i-1])
        {
            dem++;
            i++;
        }
        m=max (dem,m);
    }
    cout<<m;
}

