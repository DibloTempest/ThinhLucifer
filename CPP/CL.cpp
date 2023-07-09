#include <bits/stdc++.h>
using namespace std;
long long n, a[1000004], sl = 0, sc = 0;
main()
{
    freopen("CL.inp", "r", stdin);
    freopen("CL.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            sc = sc + a[i];
        else
            sl = sl + a[i];
    }
    cout << sc << "\n"
         << sl;
}