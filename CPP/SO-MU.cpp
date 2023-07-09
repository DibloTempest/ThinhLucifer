#include <bits/stdc++.h>
using namespace std;

long long demthuasont(long long n, long long p)
{
    long long dem = 0;
    while (n > 0)
    {
        n /= p;
        dem += n;
    }
    return dem;
}

long long somuln(long long n, long long k)
{
    long long kq = 0;
    for (long long p = 2; p <= k; p++)
    {
        if (k % p == 0)
        {
            long long dem = 0;
            while (k % p == 0)
            {
                k /= p;
                dem++;
            }
            long long somu = demthuasont(n, p) / dem;
            kq = min(kq, somu);
        }
    }
    return kq;
}

int main()
{
    long long n, k;
    cin >> n >> k;
    cout << somuln(n, k);
    return 0;
}
