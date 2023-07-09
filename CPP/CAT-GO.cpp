#include <bits/stdc++.h>
using namespace std;
long long a[1000005], n, m;
bool tknp(long long x)
{
    long long s = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > x)

            s = s + a[i] - x;
        if (s >= m)
            return 1;
    }
    return 0;
}
int main()
{
    cin >> n >> m;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1, greater<long long>());
    long long d = 1, c = a[1], res;
    while (d <= c)
    {
        long long g = (d + c) / 2;
        if (tknp(g))
        {
            d = g + 1;
            res = g;
        }
        else
            c = g - 1;
    }
    cout << res;
}