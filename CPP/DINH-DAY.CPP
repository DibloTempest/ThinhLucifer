#include <bits/stdc++.h>
using namespace std;
long long n, t, a[100005], dem = 0;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(long long i=2;i<n;i++)
    {
        if(a[i]>a[i-1] and a[i]>a[i+1])
            dem++;
    }
    cout<<dem<<endl;
    for(long long i=2;i<n;i++)
    {
        if(a[i]>a[i-1] and a[i]>a[i+1])
            cout<<a[i]<<' ';
    }
}

