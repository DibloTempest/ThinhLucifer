#include <bits/stdc++.h>
using namespace std;
long long n, a[1004];
main()
{
    freopen("REPLACE.inp", "r", stdin);
    freopen("REPLACE.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < 0)
            a[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
}