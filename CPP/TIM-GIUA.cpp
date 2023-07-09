#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long l, r;
    cin >> l >> r;
    long long s = (r - l + 1) * (l + r) / 2, cl = 1e9, m;
    long long d = l, c = r;
    while (d <= c)
    {
        long long g = (d + c) / 2;
        long long t1 = (g - l + 1) * (l + g) / 2;
        long long t2 = s - t1;
        if (t1 < t2)
            d = g + 1;
        else
            c = g - 1;
        if (abs(t1 - t2) < cl)
        {
            cl = abs(t1 - t2);
            m = g;
        }
    }
    cout << m;
}