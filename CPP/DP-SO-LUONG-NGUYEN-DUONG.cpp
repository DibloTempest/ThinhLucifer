#include <bits/stdc++.h>
using namespace std;
long long n, a[100004], d = 0, q, x, f[1000004];
main()
{
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
            b[i] = b[i - 1] + a[i];
        else
            b[i] = a[i];
    }

    while (q--)
    {
        cin >> x;
        for (int i = 1; i <= x; i++)
        {
            if (a[i] > 0)
                d++;
        }
        cout << d << "\n";
        d = 0;
    }
}