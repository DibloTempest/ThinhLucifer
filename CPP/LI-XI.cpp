#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d;
main()
{
    cin >> a >> b >> c;
    if (a % c != 0)
        d = a + (c - a % c);
    else
        d = a;
    cout
        << b / c - d / c + 1;
}
