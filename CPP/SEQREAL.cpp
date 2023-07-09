#include <bits/stdc++.h>
#define nmax 10000007
using namespace std;
long double n, a[101], nmin = -1e9;
int main()
{
    freopen("SEQREAL.inp", "r", stdin);
    freopen("SEQREAL.out", "w", stdout);
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] > 0)
            sumd += a[i];
        else
            suma += a[i];
        if (i % 2 == 0)
            sumc += a[i];
        else
            suml += a[i];
    }
    cout << fixed << setprecision(2) << s um << ' ' << suma << ' ' << sumd << ' ' << sumc << ' ' << suml;
}