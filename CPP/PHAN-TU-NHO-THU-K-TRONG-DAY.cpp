#include <bits/stdc++.h>
using namespace std;
long long t, n, a[100004], k;
main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        cin >> k;
        cout << a[k] << "\n";
    }
}