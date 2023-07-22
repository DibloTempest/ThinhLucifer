#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[1000006];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        ll x1 = 2e9, x2 = 2e9;
        ll p = lower_bound(a + 1, a + n + 1, x) - a;
        if (p <= n)
            x1 = abs(a[p] - x);
        if (p > 1)
            x2 = abs(x - a[p - 1]);
        cout << min(x1, x2);
        cout << '\n';
    }
    return 0;
}