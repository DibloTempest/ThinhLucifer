#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long n,s=0;
    cin >> n;
    for(int i=1;i<=sqrt(n);i++)
    {
    	if(n%i==0) s=s+i+n/i;
    	if(i*i==n) s=s-i;
    }
    cout<<s;
}
