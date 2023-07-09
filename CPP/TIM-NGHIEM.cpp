#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d;
long long y;
int aswer(long long a, long long b, long long c, long long d, long long y)
{
    long long dau = 1, cuoi = 1000004;
    while (dau <= cuoi)
    {
        long long x = (dau + cuoi) / 2;
        if (a * x * x * x + b * x * x + c * x + d == y)
            return x;
        if (a * x * x * x + b * x * x + c * x + d > y)
            cuoi = x - 1;
        else
            dau = x + 1;
    }
}
main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d >> y;
        cout << aswer(a, b, c, d, y) << "\n";
    }
}