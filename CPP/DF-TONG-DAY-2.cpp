#include <bits/stdc++.h>
using namespace std;
long long s[100004], a[100004], q, l, r, n;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        s[i] = s[i - 1] + a[i];
    }
    cin >> q;
    while (q--)
    {
        cin >> l >> r;
        cout << s[r] - s[l - 1] << "\n";
    }
}