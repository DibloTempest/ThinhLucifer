#include <bits/stdc++.h>
using namespace std;
long long n, t, a[104], k;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> t;
    while (t--)
    {
        cin >> k;
        long long mink;
        for (int i = 1; i <= k; i++)
            mink = min(mink, a[i]);
        cout << mink << "\n";
    }
}