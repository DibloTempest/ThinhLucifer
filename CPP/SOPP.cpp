#include <bits/stdc++.h>
using namespace std;
long long sum(long long n)
{
    long long total = 1;

    for (long long i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            if (i * i == n)
                total += i;
            else if (i * i != n)
                total += i + n / i;
        }
    }

    return total;
}
long long perfectNumber(long long n)
{
    return sum(n) > n;
}
main()
{
    freopen("SOPP.inp", "r", stdin);
    freopen("SOPP.out", "w", stdout);
    long long n;
    cin >> n;
    cout << perfectNumber(n);
}
