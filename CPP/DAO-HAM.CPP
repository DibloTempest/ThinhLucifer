#include<bits/stdc++.h>
using namespace std;
long long p,n,suc;
int main()
{
    cin>>p>>n;
    suc=p*n;
    for(long long i=1;i<=n;i++)
        suc+=i;
    cout<<suc;
}
