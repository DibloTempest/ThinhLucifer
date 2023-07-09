
#include <bits/stdc++.h>
using namespace std;
long long n,a,b,q,f[101];
int main()
{
    cin>>q;
    while(q--)
    {
        memset(f,100,0);
        cin>>a>>b>>n;
        f[0]=a;
        f[1]=b;
    for(long long i=2;i<=n;i++)
    {
      f[i]=f[i-1]+f[i-2];
    }
        cout<<f[n]<<endl;
    }
 }
