#include <bits/stdc++.h>
using namespace std;
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
    long long n, d = 0, a[104], s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (ktra(a[i]))
        {
            d++;
            s += a[i];
        }
    }
    cout << d << " " << s;
}