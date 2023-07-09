#include <bits/stdc++.h>
using namespace std;
bool ktra(long long n)
{
    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 6 && digit != 8)
        {
            return false;
        }
        n /= 10;
    }

    return true;
}

int main()
{
    freopen("SODEP.inp", "r", stdin);
    freopen("SODEP.out", "w", stdout);
    long long n;
    cin >> n;

    if (ktra(n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
