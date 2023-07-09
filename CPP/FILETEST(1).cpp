#include <bits/stdc++.h>
using namespace std;
long long n,dem;
bool f[1];
void prime()
{
    memset(f, true, sizeof(f));
    f[0] = f[1] = false;
    for(int i = 2; i * i <= nmax; i++)
    {
        if(f[i])
            for(int j = i * i; j <= nmax; j += i)
                f[j] = false;
    }
}
int main()
{
    prime();
    cin>>n;
    for(long long i=0;i<100000008);i++)
    {
        if(f[i])
            dem++;
        if(dem==n)
            return cout<<i,0
    }
}
