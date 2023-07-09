#include<bits/stdc++.h>
using namespace std;
long long tong(long long n)
{
    long long x=0;
    while(n!=0)
    {
        x++;
        n=n/10;
    }
    return x;
}
long long luy_thua(long long n, long long x)
{
    long long sum=1;
    for(long long i=1;i<=x;i++)
    {
        sum*=n;
    }
    return sum;
}
long long n,sum,x,t;
int main()
{
    cin>>n;
    x=tong(n);
    t=n;
    for(long long i=1;i<=x;i++)
    {

        sum+=luy_thua(n%10,x);
        n/=10;
    }
    if(sum==t)
        cout<<"YES";
    else cout<<"NO";
}

