#include <bits/stdc++.h>
using namespace std;
bool ktra(long long n)
{
    if (n < 2)
    {
        return false;
    }

    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool songnt(long long n)
{
    if (!ktra(n))

        return false;
    long long daonguoc = 0;
    long long temp = n;
    while (temp != 0)
    {
        daonguoc = daonguoc * 10 + temp % 10;
        temp /= 10;
    }

    return ktra(daonguoc);
}

int main()
{
    long long n;
    cin >> n;

    if (songnt(n))
        cout << 1;
    else
        cout << 0;

    return 0;
}
