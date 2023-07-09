#include <bits/stdc++.h>
using namespace std;
long long b[100004], a[100004], subarr, n, t;
main()
{
    freopen("DOANCON3.inp", "r", stdin);
    freopen("DOANCON3.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    memset(b, 0, sizeof(b));
    for (int i = 1; i <= n; i++)
    {
        if (b[i - 1] + a[i] > a[i])
            b[i] = b[i - 1] + a[i];
        else
            b[i] = a[i];
    }
    subarr = -100000;
    for (int i = 1; i <= n; i++)
    {
        subarr = max(b[i], subarr);
    }
}