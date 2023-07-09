#include <bits/stdc++.h>
using namespace std;
long long a[1000005], n, m, x;
long long tknp(long long x)
{
    long long d = 1, c = n, res = 0;
    while (d <= c)
    {
        long long g = (d + c) / 2;
        if (a[g] >= x)
            c = g - 1;
        else
        {
            res = g;
            d = g + 1;
        }
    }
    return res;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    cin >> m;
    while (m--)
    {
        cin >> x;
        cout << tknp(x) << "\n";
    }
}