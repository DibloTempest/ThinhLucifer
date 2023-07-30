#include <bits/stdc++.h>
using namespace std;
long long n;
long long check(long long m)
{
    long long d = 0, cnt = 1;
    return (1 + m) * m / 2;
}
long long bs()
{
    long long l = 1, r = 100000000, res;
    while (l <= r)
    {
        long long m = (l + r) / 2;
        if (check(m) >= n)
        {
            r = m - 1;
            res = m;
        }
        else
            l = m + 1;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cout << bs();
}