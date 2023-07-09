#include <bits/stdc++.h>
using namespace std;
long long n, a[10000004];
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            cout << a[i] << " ";
    }
    for (long long i = 1; i <= n; i++)
    {
        if (a[i] % 2 != 0)
            cout << a[i] << " ";
    }
}