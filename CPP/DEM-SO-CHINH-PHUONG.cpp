#include <bits/stdc++.h>
using namespace std;
bool ktra(long long n)
{
    long long k = sqrt(n);
    if (k * k == n)
        return true;
    else
        return false;
}
long long n, a[1000004], d = 0;
main()
{
    cin >> n;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    for (long long i = 1; i <= n; i++)

        if (ktra(a[i]))
        {
            d++;
        }
    cout << d;
}