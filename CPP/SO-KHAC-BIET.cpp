#include <bits/stdc++.h>
using namespace std;
long long n, a[20004], m, b[20004], c[10004], d[10004];
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        c[a[i]]++;
    }
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> b[i];
        d[b[i]]++;
    }
    for (int i = 1; i <= 10000; i++)
    {
        if (c[i] != d[i])
            cout << i << " ";
    }
}