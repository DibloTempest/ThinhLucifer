#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long a[500005], p[500005];
int main()
{
    long long n, s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        p[i] = (p[i - 1] + a[i] + mod) % mod;
    for (int i = 2; i <= n; i++)
        s = (s + p[i - 1] * a[i] % mod + mod) % mod;
    cout << s % mod;
}