#include <bits/stdc++.h>
using namespace std;
long long n,dem,a[100005],b[100005];
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    for(long long i=1;i<=100000;i++)
    {
        dem+=b[i]/i;
    }
    cout<<dem;
}

