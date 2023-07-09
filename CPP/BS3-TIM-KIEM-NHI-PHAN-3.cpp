#include <bits/stdc++.h>
using namespace std;
long long t, n, x, a[100005];
long long tknp1(long long x)
{
    int d = 1, c = n;
    long long res;
    while (d <= c)
    {
        int g = (d + c) / 2;
        if (a[g] <= x)
        {
            res = a[g];
            d = g + 1;
        }
        else
            c = g - 1;
    }
    return res;
}
long long tknp2(long long x)
{
    int d = 1, c = n;
    long long res;
    while (d <= c)
    {
        int g = (d + c) / 2;
        if (a[g] >= x)
        {
            res = a[g];
            c = g - 1;
        }
        else
            d = g + 1;
    }
    return res;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    cin >> t;
    while (t--)
    {
        cin >> x;
        long long t = tknp1(x);
        long long p = tknp2(x);
        cout << min(abs(x - p), abs(x - t)) << '\n';
    }
}