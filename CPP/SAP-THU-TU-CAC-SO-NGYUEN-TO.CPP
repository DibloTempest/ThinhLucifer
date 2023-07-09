#include <bits/stdc++.h>
using namespace std;
long long n,dem;
bool f[10000007];
void prime()
{
    memset(f, true, sizeof(f));
    f[0] = f[1] = false;
    for(int i = 2; i * i <= 10000007; i++)
    {
        if(f[i])
            for(int j = i * i; j <= 10000007; j += i)
                f[j] = false;
    }
}
int main()
{
    prime();
    cin>>n;
    for(long long i=0;i<1000008;i++)
    {
        if(f[i])
            dem++;
        if(dem==n)
            return cout<<i,0;
    }
}

