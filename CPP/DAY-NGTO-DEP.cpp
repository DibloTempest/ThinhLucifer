#include <bits/stdc++.h>
using namespace std;
long long n, dep = 0, d = 0, a[104];
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
        if (ktra(a[i]))
        {
            d++;
            if (ktra(i) == 0)
                dep++;
        }
    }
    if (dep == d)
        cout << "GOOD";
        else
        cout << dep;
}