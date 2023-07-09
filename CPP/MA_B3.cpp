#include <bits/stdc++.h>
using namespace std;
bool check(long long a, long long b)
{
    long long gcd = __gcd(a, b);
    if (gcd == 1)
    {
        return true;
    }
    return false;
}
long long nguoc(long long n)
{
    long long d = 0, nl = 0;
    while (n != 0)
    {
        d = n % 10;
        nl = nl * 10 + d;
        n /= 10;
    }
    return nl;
}

int main()
{
    freopen("MA_B3.inp", "r", stdin);
    freopen("MA_B3.out", "w", stdout);
    long long a, b, d = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (check(i, nguoc(i)))
            d++;
    }
    cout << d;
}
