#include <bits/stdc++.h>
using namespace std;
long long a[1000005],s[1005];
int main()
{
    long long n,mina;
    cin >> n;
    for (int i=1;i<=n;i++)
    cin >> a[i];
    for (int i=1;i<=n;i++)
    s[i]=s[i-1]+a[i];
     mina=1e9;
    for (int i=1;i<=n;i++)
    {
        mina=min(mina,abs(s[i]-(s[n]-s[i])));
    }
    cout << mina;
}