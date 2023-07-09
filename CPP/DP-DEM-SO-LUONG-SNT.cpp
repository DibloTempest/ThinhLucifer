#include <bits/stdc++.h>
#define nmax 10000007
using namespace std;
long long n,c[1000005],a,b;
bool f[nmax];
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    prime();
    cin>>n;
    for(int i=1;i<=1000000;i++)
    c[i]=c[i-1]+f[i]; 
    for(int i=1;i<=n;i++)
    {
	cin>>a>>b;
	cout<<c[b]-c[a-1]<<"\n";
     }
}