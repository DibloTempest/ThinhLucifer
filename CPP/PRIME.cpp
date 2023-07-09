#include <bits/stdc++.h>
using namespace std;
long long n, d = 0, a[104], s = 0;
bool ktra(long long n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
main()
{
    freopen("PRIME.inp", "r", stdin);
    freopen("PRIME.out", "w", stdout);
    cin >> n;
    for (int i = 1; i < 100; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < 100; i++)
    {
        if (ktra(a[i]))
        {
            s = s + a[i];
            d++;
        }
    }
    cout << d << " " << s;
}
