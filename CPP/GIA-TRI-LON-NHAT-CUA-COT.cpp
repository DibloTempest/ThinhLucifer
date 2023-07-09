#include <bits/stdc++.h>
using namespace std;
long long n, m, a[204][204], mina = 0;
main()
{
    cin >> m >> n;
    for (long long i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    for (int i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
            mina = min(mina, a[1][i]);
    }
    cout << mina;
}