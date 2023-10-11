#include <bits/stdc++.h>
#define nmax 10000007
using namespace std;
long double n, a[101], sum=0,suma=0,sumd=0,sumc=0,suml=0;
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
    cout << fixed << setprecision(2) << sum << ' ' << suma << ' ' << sumd << ' ' << sumc << ' ' << suml;
}