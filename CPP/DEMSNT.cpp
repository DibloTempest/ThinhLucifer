#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DEMSNT.inp", "r", stdin);
    freopen("DEMSNT.out", "w", stdout);
    long long n, res = 0, i = 2;
    cin >> n;
    while (i * i <= n)
    {
        if (n % i == 0)
            res++;
        while (n % i == 0)
            n = n / i;

        i++;
    }
    if (n > 1)
        res++;
    cout << res;
}