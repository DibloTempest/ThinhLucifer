#include <bits/stdc++.h>
using namespace std;
long long n, k, t;
long long g(long long n, long long k)
{
    long long res = 0;
    while (n > 0)
    {
        res += n / k;
        n = n / k;
    }
    return res;
}
long long nt(long long x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void file()
{
    if (fopen("SOMU.INP", "r"))
    {
        freopen("SOMU.INP", "r", stdin);
        freopen("SOMU.OUT", "w", stdout);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    file();
    while (cin >> n)
    {
        for (int i = 2; i <= n; i++)
        {
            if (nt(i))
                cout << g(n, i) << " ";
        }
    }
}