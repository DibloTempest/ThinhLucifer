#include <bits/stdc++.h>
using namespace std;
long long dem_uoc(long long n)
{
    long long dem = 0;
    for (long long i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
            dem = dem + 2;
    long long k = sqrt(n);
    if (k * k == n)
        dem--;
    return dem;
}
long long t, a, b, d = 0;
main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        for (int i = 1; i <= a; i++)

            if (a % i == 0)
                d = d + 2;
    }
}