#include <bits/stdc++.h>
using namespace std;
long long n, t, a[104], k, mina[104];
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    mina[1] = a[1];
    for (int i = 2; i <= n; i++)
        mina[i] = min(mina[i - 1], a[i]);
    cin >> t;
    while (t--)
    {
        cin >> k;
        cout << mina[k] << "\n";
    }
}