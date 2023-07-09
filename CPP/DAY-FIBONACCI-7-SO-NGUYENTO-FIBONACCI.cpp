#include <bits/stdc++.h>
using namespace std;
long long n,a=3,f[107];
bool ktr_snt(long long n)
{
        for(long long i=2;i<= sqrt(n);i++)
        {
            if(n%i==0)
                return false;
        }
    return n>1;
}
int main()
{
    cin>>n;
    f[1]=f[2]=1;
    while(f[a-1]+f[a-2]<=n)
    {
        f[a]=f[a-1]+f[a-2];
        a++;
    }
    for(long long i=a;i>=3;i--)
    {
        if(ktr_snt(f[i]))
        {
            cout<<f[i];
            break;
        }
    }
}
