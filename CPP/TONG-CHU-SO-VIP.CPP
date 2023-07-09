#include <bits/stdc++.h>
using namespace std;
long long n,s;
int main()
{
    cin>>n;
    for(long long i=1;i<=n;i*=10)
    {
        s+=n-i+1;
    }
    cout<<s;

}

