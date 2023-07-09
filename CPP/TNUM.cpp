#include <bits/stdc++.h>
using namespace std;
long long dem_uoc(long long n)
{
    long long s = sqrt(n);
    long long dem = 0;
    for (long long i = 1; i < sqrt(n); i++)
        if (n % i == 0)
            dem++;
    dem *= 2;
    if (s * s == n)
        return dem + 1;
    else
        return dem;
}
long long n, a[100004];
int main()
{
    freopen("TNUM.inp", "r", stdin);
    freopen("TNUM.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        if (dem_uoc(a[i]) == 3)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
}
