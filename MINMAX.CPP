#include <bits/stdc++.h>
#define nmax 10000007
using namespace std;
long double n, a[101], ln = -1e9, nn = 1e9;
int main()
{
    freopen("MINMAX.inp", "r", stdin);
    freopen("MINMAX.out", "w", stdout);
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        ln = max(ln, a[i]);
        nn = min(nn, a[i]);
    }
    cout << fixed << setprecision(2) << ln << " " << nn;
}