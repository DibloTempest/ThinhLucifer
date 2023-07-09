 #include <bits/stdc++.h>
using namespace std;
long long n,k,dem;
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
    cin>>n>>k;
    for(long long i=2;i<=n;i++)
    {
        if(f[i] == true)
        {
            dem+=n/i;
        }
        if(dem>=k)
        {
            dem-=n/i;
            for(long long j=i;j<=n;j+=i)
            {
                dem++;
                if(dem==k+1)
                    return cout<<j,0;
            }
        }
    }
}

