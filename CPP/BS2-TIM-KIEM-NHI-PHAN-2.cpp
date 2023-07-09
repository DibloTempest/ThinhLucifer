#include <bits/stdc++.h>
using namespace std;
long long a[1000005], n, t, x;
long long tknp(long long x)
{
    long long d = 1, c = n, res;
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
    for (long long i = 1; i <= n; i++)
        a[i] = i * i + 1;
    cin >> t;
    while (t--)
    {
        cin >> x;
        cout << tknp(x) << '\n';
    }
}