#include <bits/stdc++.h>
using namespace std;
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
long long n,k,dem;
int main()
{
    prime();
    cin>>n>>k;
    for(long long i=2;i<=n;i++)
    {
        if(f[i])
        {
            for(long long j=i+1;j<=i+k;j++)
            {
                if(f[j] and j<=n)
                    dem++;
            }
        }
    }
    cout<<dem;
}