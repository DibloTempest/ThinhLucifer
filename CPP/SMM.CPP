#include <bits/stdc++.h>
using namespace std;
long long n;
long long smm(long long n)
{
    long long cnt=0 ;
    while(n!=0)
    {
        if(n%10==8 or n%10==6)
            cnt++;
        n/=10;
    }
    return cnt;
}
int main()
{
    freopen("SMM.inp", "r", stdin);
    freopen("SMM.out", "w", stdout);
    cin>>n;
    cout<<smm(n);
}

