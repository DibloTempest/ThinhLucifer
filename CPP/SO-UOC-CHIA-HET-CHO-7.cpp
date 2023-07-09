#include <bits/stdc++.h>
using namespace std;
long long p(long long n)
{
    long long dem = 0;
    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            dem = dem + 2;
        if (i * i == n)
            dem = dem - 1;
    }
    return dem;
}
long long n, a[104], d = 0;
main()
{
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = i + 1; j <= n; j++)
        {
            if ((p(a[i]) + p(a[j])) % 7 == 0)
                d++;
        }
    }
    cout << d;
}