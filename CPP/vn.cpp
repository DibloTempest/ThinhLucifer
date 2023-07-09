#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Vn.inp", "r", stdin);
    freopen("Vn.out", "u", stdout);
    long long n, m, UCLN, x, y;
    cin >> n >> m;
    UCLN = __gcd(n, m);
    x = n / UCLN;
    y = m / UCLN;
    cout << UCLN << "\n"
         << x << " " << y;
}