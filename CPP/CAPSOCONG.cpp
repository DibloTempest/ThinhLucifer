#include <bits/stdc++.h>
using namespace std;
main()
{
    freopen("CAPSOCONG.inp", "r", stdin);
    freopen("CAPSOCONG.out", "w", stdout);
    long long a[7];
    for (int i = 1; i <= 3; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 3 + 1);
    if (a[2] - a[1] == a[3] - a[2])
        cout << a[3] + a[3] - a[2];
    else
    {
        if (a[2] - a[1] > a[3] - a[2])
            cout << a[1] + a[3] - a[2];
        else
            cout << a[2] + a[2] - a[1];
    }
}