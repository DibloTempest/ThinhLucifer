#include <bits/stdc++.h>
using namespace std;
long long n, m, a[1000004], d = 0;
main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            d++;
    }
    cout << n / 2 - d;
}