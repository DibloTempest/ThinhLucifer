#include <bits/stdc++.h>
using namespace std;
long long m, n, d = 0, a[1004][1004];
main()
{
    cin >> n >> m;
    for (long long i = 1; i <=n; i++)
        for (long long j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (i + j == 0)
                d++;
        }
    if (d * 2 > m * n)
        cout << "YES";
    else
        cout << "NO";
}