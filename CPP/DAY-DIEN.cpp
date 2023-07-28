#include <bits/stdc++.h>
using namespace std;
long long n, a[100005], k, s = 0;
long long check(long long x)
{
    long long dem = 0;
    for (int i = 1; i <= n; i++)
    {
        dem = dem + a[i] / x;
    }
    if (dem >= k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s = s + a[i];
    }
    long long d = 1, c = s / k, res = 0;
    while (d <= c)
    {
        long long g = (d + c) / 2;
        if (check(g))
        {
            res = g;
            d = g + 1;
        }
        else
        {
            c = g - 1;
        }
    }
    cout << res;
}