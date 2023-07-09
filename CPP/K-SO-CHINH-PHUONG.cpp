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
long long n, a[1000004], k, d = 0;
main()
{
    cin >> n >> k;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    for (long long i = 1; i <= n; i++)
    {

        if (ktra(a[i]) == 1)
        {
            d++;
            if (d == k)
            {
                cout << "Co";
                return 0;
            }
        }
        else
            d = 0;
    }
    cout << "Khong";
}