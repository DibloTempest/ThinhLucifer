#include <bits/stdc++.h>
using namespace std;
long long y, k, n;
main()
{
    freopen("BMARKET.inp", "r", stdin);
    freopen("BMARKET.out", "w", stdout);
    cin >> y >> k >> n;
    if (n == y)
        cout << -1;
    for (int i = 1; i <= n - y; i++)
    {
        if ((i + y) % k == 0)
            cout << i << " ";
    }
}