#include <bits/stdc++.h>
using namespace std;
long long n, d,t,a[1000005],s=0;
bool f[10000007];
void prime()
{
    memset(f, true, sizeof(f));
    f[0] = f[1] = false;
    for(int i = 2; i * i <= 10000007; i++)
    {
        if(f[i])
            for(int j = i * i; j <=10000007; j += i)
                f[j] = false;
    }
}
 int main()
{
    prime();
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (long long i = 1; i <= n; i++)
    {
        if(f[a[i]]==true) s++;
        if (f[a[i]]==true and f[i] == false)
        {
            d++;    
        }
        else if (f[a[i]] and f[i]) t=11111;
    }
    if(t==11111)
        cout<<d;
    else if(t!=11111 or s==0)
    cout << "GOOD";
}
