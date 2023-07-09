#include <bits/stdc++.h>
using namespace std;
long long n, d = 0;
main()
{
    freopen("SOCHAN.inp", "r", stdin);
    freopen("SOCHAN.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (i % 2 == 0 and i % 3 == 0)
            d++;
    cout << d << "\n";
    for (int i = 1; i <= n; i++)
        if (i % 2 == 0 and i % 3 == 0)
            cout << i << " ";
}