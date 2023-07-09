#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d, ln;
main()
{
    cin >> a >> b >> c >> d;
    ln = max(a, b);
    ln = max(ln, c);
    ln = max(ln, d);
    cout << ln;
}