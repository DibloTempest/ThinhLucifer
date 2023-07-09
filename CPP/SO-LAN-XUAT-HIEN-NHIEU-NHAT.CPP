#include<bits/stdc++.h>
using namespace std;
long long n,a[101],b[101],m=-1e9;
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    for(long long i=1;i<=n;i++)
    {
        m=max(m,b[a[i]]) ;
    }
    cout<<m;
}

