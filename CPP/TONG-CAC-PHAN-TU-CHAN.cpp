#include <bits/stdc++.h>
using namespace std;
long long a[110][110], n, m;
main()
{
    long long s = 0;
    cin >> m >> n;
    for (long long i = 1; i <= m; i++)
        for (long long j = 1; j <= n; j++)
            cin >> a[i][j];

    for (long long i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
            if (a[i][j] % 2 == 0)
                s = s + a[i][j];
    }
    cout << s;
}