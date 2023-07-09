#include <bits/stdc++.h>
using namespace std;
long long n, a[1000005], b[10000005], d, c, g, maxa = 0, t;
main()
{
    cin >> n >> t;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    b[1] = a[1];
    for (int i = 2; i <= n; i++)
        b[i] = b[i - 1] + a[i];
    for (int i = 1; i <= n; i++)
    {
        d = i;
        c = n;
        while (d <= c)
        {
            g = (d + c) / 2;
            if (b[g] - b[i - 1] <= t)
            {
                maxa = max(maxa, g - i + 1);
                d = g + 1;
            }
            else
                c = g - 1;
        }
    }
    cout << maxa;
}
