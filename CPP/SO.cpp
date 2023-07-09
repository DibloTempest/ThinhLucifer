#include <bits/stdc++.h>
using namespace std;
long long n, a[60004], gtln = -1e9, d = 0;
main()
{
    freopen("SO.inp", "r", stdin);
    freopen("SO.out", "w", stdout);
    for (int i = 1; i <= 10004; i++)
    {
        cin >> a[i];
        gtln = max(gtln, a[i]);
    }
    cout << gtln << "\n";
    for (int i = 1; i <= 10004; i++)
        if (gtln == a[i])
        {
            cout << i << " ";
        }
}
