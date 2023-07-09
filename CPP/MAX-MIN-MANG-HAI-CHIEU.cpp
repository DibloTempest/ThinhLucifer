#include <bits/stdc++.h>
using namespace std;
long long m, n, a[110][110], ln = 0, nn = 1e3;
main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
        {
            ln = max(a[i][j], ln);
            nn = min(a[i][j], nn);
        }
    cout << nn << endl
         << ln;
}