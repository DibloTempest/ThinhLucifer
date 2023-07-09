#include <bits/stdc++.h>
using namespace std;
long long n, a[104], d = 0, s = 0;
bool ktra(long long n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (ktra(a[i]))
        {
            d++;
            s = s + a[i];
        }
    }
    cout << d << " " << s;
}