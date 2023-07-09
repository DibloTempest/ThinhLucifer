#include <bits/stdc++.h>
using namespace std;
long long n,a[200010],t,dem,m=1e9;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--)
    {
        m=1e18;
        cin>>n;
        for(long long i=1;i<=n;i++)
            cin>>a[i];
        for(long long i=n-1;i>=1;i--)
        {
            m=min(a[i+1],m);
            if(a[i]>m)
                dem++;
        }
        cout<<dem<<endl;
        dem=0;
    }

}
