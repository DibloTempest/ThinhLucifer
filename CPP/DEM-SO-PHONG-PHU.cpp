#include <bits/stdc++.h>
using namespace std;
long long uoc[10000005];
void sanguoc()
{
    for(int i=1;i<=1000000;i++)
    {
        for(int j=i;j<=1000000;j+=i)
        uoc[j]+=i;
    }
}
long long n,a[1000005],dem=0;
main()
{
    freopen("PP.inp", "r", stdin);
    freopen("PP.out", "w", stdout);
    sanguoc();
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]; 
        if(2*a[i]<uoc[a[i]]) dem++;
    }
    cout << dem;
}
