#include <bits/stdc++.h>
using namespace std;
long long l, r, s, a, b, t;
signed main()
{
    cin >> l >> r;
    s = (l + r) * (r - l + 1) / 2;
    a = r / 13;
    b = l / 13;
    if (l % 13 != 0)
        b++;
    t = 13 * (a + b) * (a - b + 1) / 2;
    cout << s - t;
}