#include <bits/stdc++.h>
using namespace std;

bool ktra(long long number)
{
    if (number < 2)
    {
        return false;
    }

    for (long long i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    freopen("DPRIME3.inp", "r", stdin);
    freopen("DPRIME3.out", "w", stdout);
    long long N, d = 0;
    cin >> N;
    for (int i = 3; i <= sqrt(N); i++)
    {
        long long x = i * i + 4;
        if (ktra(i) and ktra(x) and x <= N)
        {
            cout << 2 << " " << i << " " << x << "\n";
            d++;
        }
    }
    if (d == 0)
        cout << -1;
}
