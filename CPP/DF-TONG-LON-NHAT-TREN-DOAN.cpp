#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n;
    int a[n + 1];
    int d[n + 1];
    d[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        d[i] = max(d[i - 1], d[i - 1] + a[i]);
    }
    cin >> q;
    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        cout << d[r] - d[l - 1] << '\n';
    }
    return 0;
}