#include <bits/stdc++.h>
using namespace std;
long long a,b,x,y,dem;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>a>>b>>x>>y;
    cout<<b/x+b/y-(a-1)/x-(a-1)/y-b/(x*y/__gcd(x,y))+(a-1)/(x*y/__gcd(x,y));
}


