#include <bits/stdc++.h>
using namespace std;
long long sum(long long a, long long b) {
  return (a + b) * (b - a + 1) / 2; 
}
int main()
{
    long long n,a,b,s=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        s=s+sum(a,b);
    }
    cout<<s;
    return 0;
}
