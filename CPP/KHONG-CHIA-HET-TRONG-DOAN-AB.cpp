#include <bits/stdc++.h>
using namespace std;
long long a, b, sch = 0, x;
main()
{
    cin >> a >> b >> x;

    sch = b / x - (a - 1) / x;
    cout << b - a + 1 - sch;
}