#include <bits/stdc++.h>
using namespace std;
long long a[110][110], n, d = 0;
main()
{
    long long s = 0;
    cin >> n;
    for (long long i = 1; i <= n; i++)
        for (long long j = 1; j <= n; j++)
            cin >> a[i][j];
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= n; j++)
            if (a[i][j] < 0)
                d++;
    }
    cout << d;
}