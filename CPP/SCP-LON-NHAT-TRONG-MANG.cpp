#include <bits/stdc++.h>
using namespace std;
long long n, a[100004], ln = -1;
bool ktra(long long n)
{
    long long k = sqrt(n);
    if (k * k == n)
        return true;
    else
        return false;
}

main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (ktra(a[i]))
            ln = max(ln, a[i]);
    }
    cout << ln;
}
