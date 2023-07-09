#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long n,d=0;
    cin >> n;
    for(long long i=1;i<=sqrt(n);i++)
    {
    	if(n%i==0) d=d+2;
    	if(i*i==n) d=d-1;
    }
    cout<<d;
}
