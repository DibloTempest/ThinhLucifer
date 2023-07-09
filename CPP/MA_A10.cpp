#include <bits/stdc++.h>
using namespace std;
long long a, b;
main()
{
    freopen("MA_A10.inp", "r", stdin);
    freopen("MA_A10.out", "w", stdout);
    cin >> a >> b;
    cout << ((a + b) * (b - a + 1)) / 2;
}