#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, q;
    cin >> n;
    long long a[100004];
    long long d[100004];
    d[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        d[i] = d[i - 1] + a[i];
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