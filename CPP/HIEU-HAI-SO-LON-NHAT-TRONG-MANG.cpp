#include <bits/stdc++.h>
using namespace std;
long long a[1000004], f[1000004], d, n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    f[n] = a[n];
    for (int i = n - 1; i >= 1; i--)
    {
        f[i] = max(f[i + 1], a[i]);
    }
    d = -1e18;
    for (int i = 1; i <= n - 1; i++)
    {
        d = max(d, f[i + 1] - a[i]);
    }
    cout << d;
}
