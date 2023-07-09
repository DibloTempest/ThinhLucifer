#include <bits/stdc++.h>
using namespace std;
long long dao(long long n)
{
    long long dao = 0;
    while (n != 0)
    {
        dao = dao * 10 + n % 10;
        n /= 10;
    }
    return dao;
}
bool ktr_snt(long long n)
{
    long long s = 0;
    if (n < 2)
        return false;
    else
        for (long long i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return false;
        }
    return true;
}
long long n;
int main()
{
    freopen("CPRIME.inp", "r", stdin);
    freopen("CPRIME.out", "w", stdout);
    cin >> n;

    if (ktr_snt(n) and ktr_snt(dao(n)))
        cout << 1 << endl;
    else
        cout << 0 << endl;
}