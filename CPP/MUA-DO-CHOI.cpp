#include <bits/stdc++.h>
using namespace std;
long long x, y, n;
main()
{
    cin >> x >> y >> n;
    long long k = n / (x + y);
    long long t = k * 2;
    n = n - k * (x + y);
    if (n == 0)
    {
        cout << t;
        return 0;
    }
    if (n - x > 0)
        t = t + 2;
    else
        t = t + 1;
    cout << t;
}