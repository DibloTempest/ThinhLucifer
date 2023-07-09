#include <bits/stdc++.h>
using namespace std;
long long a[1004], sln = 0, snn = 0;
main()
{
    freopen("SUM.inp", "r", stdin);
    freopen("SUM.out", "w", stdout);
    for (long long i = 1; i <= 5; i++)
        cin >> a[i];
    sort(a + 1, a + 5 + 1);
    snn = a[1] + a[2] + a[3] + a[4];
    sln = a[5] + a[4] + a[3] + a[2];
    cout << snn << " " << sln;
}