#include <bits/stdc++.h>
using namespace std;
long long a[1000004], n, q, t;
long long tknp1(long long k)
{
    long long d = 1, c = n, res = 0;
    while (d <= c)
    {
        long long g = (d + c) / 2;
        if (a[g] <= k)
        {
            res = g;
            d = g + 1;
        }
        else
            c = g - 1;
    }
    return res;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    cin >> q;
    while (q--)
    {
        cin >> t;
        cout << tknp1(t) << " \n";
    }
}