#include <bits/stdc++.h>
using namespace std;
long long n,t;

main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--)
    {
        long long i=2,kq=1,dem;
        cin>>n;
        while(i*i<=n)
        {
            dem=0;
            if(n%i==0) 
            {
                 while(n%i==0)
                {
                    dem++;
                    n=n/i;
                }
                kq=kq*(dem+1);
            }
            i++;
        }
        if(n>1) kq=kq*(1+1);
        cout<<kq"\n";
    }
}