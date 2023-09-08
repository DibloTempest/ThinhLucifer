#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("vn.inp", "r", stdin);
    freopen("vn.out", "w", stdout);
    long long n, m, UCLN, x, y;
    cin >> n >> m;
    UCLN = __gcd(n, m);
    x = n / UCLN;
    y = m / UCLN;
    cout << UCLN << "\n"
         << x << " " << y;
}