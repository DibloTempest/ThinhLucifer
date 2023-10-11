#include <bits/stdc++.h>
using namespace std;
long long n, s, a[104], tmp = 0;
main()
{
    freopen("CD.inp", "r", stdin);
    freopen("CD.out", "w", stdout);

    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    long long i = 1;
    while (tmp < s)
    {
        tmp += a[i];
        i++;
    }
    cout << i - 2;
}