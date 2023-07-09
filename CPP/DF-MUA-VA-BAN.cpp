#include <bits/stdc++.h>
using namespace std;
long long n, a[100004], maxa = -1, f[100004];
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    f[n] = a[n];
    for (int i = n - 1; i >= 1; i--)
    {
        f[i] = min(f[i + 1], a[i]);
    }
    for (int i = 1; i <= n - 1; i++)
    {
        maxa = max(a[i] - f[i + 1], maxa);
    }
    if (maxa > 0)
        cout << maxa;
    else
        cout << -1;
}