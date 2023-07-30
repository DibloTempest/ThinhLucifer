#include <bits/stdc++.h>
using namespace std;
#define nmax 1000007
long long a, b, k, d[1000001];
bool f[10000007];
void prime()
{
    memset(f, true, sizeof(f));
    f[0] = f[1] = false;
    for (int i = 2; i * i <= 10000007; i++)
    {
        if (f[i])
            for (int j = i * i; j <= 10000007; j += i)
                f[j] = false;
    }
}
bool check(long long m)
{
    for (long long i = a + m - 1; i <= b; i++)
    {
        if (d[i] - d[i - m] < k)
            return false;
    }
    return true;
}
long long bs()
{
    long long l = 1, r = b - a + 1, res = -1;
    while (l <= r)
    {
        long long m = (l + r) / 2;
        if (check(m))
        {
            res = m;
            r = m - 1;
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
    cin >> a >> b >> k;
    prime();
    for (long long i = 2; i <= 1000000; i++)
        d[i] = d[i - 1] + f[i];
    cout << bs();
}