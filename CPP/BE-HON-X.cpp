#include <bits/stdc++.h>
using namespace std;
long long a[1000005], t, x, n;
long long tknp(long long x)
{
    long long d = 1, c = n, res = -1;
    while (d <= c)
    {
        long long g = (d + c) / 2;
        if (a[g] <= x)
        {
            res = a[g];
            d = g + 1;
        }
        else
        {
            c = g - 1;
        }
    }
    return res;
}
int main()
{
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    cin >> t;
    while (t--)
    {
        cin >> x;
        cout << tknp(x) << endl;
    }
}