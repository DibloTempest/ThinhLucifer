#include <bits/stdc++.h>
using namespace std;
long long a,b,tong[3000006],dem;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>a>>b;
    for(long long i = 1; i <= b; i++)
    {
        for(long long j=i;j<=b; j+=i)
                tong[j]+=i;
    }
    for(long long i=a;i<=b;i++)
    {
        if(tong[i]-i>i)
        {

            dem++;
        }

    }
    cout<<dem;
}
