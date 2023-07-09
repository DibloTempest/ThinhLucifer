#include <bits/stdc++.h>
using namespace std;
long long f[1000006];
void fibo()
{
    f[0]=f[1]=1;
    for(long long i=2;i<=1000006;i++)
    {
        f[i]=(f[i-1]+f[i-2])%1000000007;
    }
}
long long n,x;
int main()
{
    fibo();
    cin>>n;
    while(n--)
    {
        cin>>x;
        cout<<f[x-1]<<endl;

    }


}
