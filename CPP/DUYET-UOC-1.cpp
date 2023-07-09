#include <bits/stdc++.h>
using namespace std;
long long a, b, A, B;
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
main()
{
    cin >> a >> b;
    A = dem_uoc(a);
    B = dem_uoc(b);
    if (A > B)
    {
        cout << a << endl;
        cout << A - B;
    }
    else if (B == A)
        cout << max(a, b);
    else
    {
        cout << b << endl;
        cout << B - A;
    }
}