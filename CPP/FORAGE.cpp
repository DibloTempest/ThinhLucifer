#include <bits/stdc++.h>
using namespace std;
long long n, a[10005], k, p, sotien;
int main()
{
    freopen("FORAGE.inp", "r", stdin);
    freopen("FORAGE.out", "w", stdout);
    cin >> p >> n >> k;
    sotien = k * (n + 1) * n / 2;
    if (sotien <= p)
        cout << "YES";
    else
        cout << "NO" << endl
             << sotien - p;
}
