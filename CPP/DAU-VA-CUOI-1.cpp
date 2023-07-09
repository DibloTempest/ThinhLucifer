#include <bits/stdc++.h>
using namespace std;
long long n, a[100004], ln = 0;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        ln = max(ln, a[i] + a[i + 1]);
        if (ln < a[1] + a[n])
        {
            ln = a[1] + a[n];
        }
    }

    cout << ln;
}