#include <bits/stdc++.h>
using namespace std;
long long a,b,n,d,s[100000008];
int main()
{
    cin>>a>>b>>n;
    for(long long i=a;i<=1000000;i+=a)
    {
            s[i]=i;
    }
    for(long long i=b;i<=1000000;i+=b)
    {
            s[i]=i;
    }
    sort(s+1,s+1000000+1);
    for(long long i=1;i<=1000000;i++)
    {
        if(s[i]>0)
            d++;
        if(d==n)
            return cout<<s[i],0;
    }



}
