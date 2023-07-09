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
    for (long long i = 1; i <= n; i++)
    {
        s = 0;
        for (long long j = 1; j <= m; j++)
            s = s + a[j][i];
        cout << s << endl;
    }
}