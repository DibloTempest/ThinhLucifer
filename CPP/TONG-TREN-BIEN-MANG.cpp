#include <bits/stdc++.h>
using namespace std;
long long a[110][110], n, m;
main()
{
    long long s = 0;
    cin >> n;
    for (long long i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (long long i = 1; i <= n; i++)
        s = s + a[1][i];
    for (long long i = 1; i <= n; i++)
        s = s + a[i][n];
    for (long long i = 1; i <= n; i++)
        s = s + a[i][1];
    for (long long i = 1; i <= n; i++)
        s = s + a[n][i];
    cout << s - a[1][1] - a[1][n] - a[n][1] - a[n][n];
}