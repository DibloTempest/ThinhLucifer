#include <bits/stdc++.h>
using namespace std;
long long Dem_UocSo(long long N)
{
    long long dem = 0;
    for (long long i = 1; i <= sqrt(N); i++)
    {
        if (N % i == 0)
            dem = dem + 2;
        if (i == N / i)
            dem = dem - 1;
    }

    return dem;
}

int main()
{
    long long t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << Dem_UocSo(n);
    }
}