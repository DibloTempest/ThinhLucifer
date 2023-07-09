#include <bits/stdc++.h>
using namespace std;
long double x,n,s;
main()
{
    cin>>n>>x;
    for(long long i=1;i<=n;i++)
    {
        long double t=1;
        for(long long j=1;j<=i;j++)
            t=x*t;
        s+=t/i;
    }
    cout<<fixed<<setprecision(6)<<s;
}
