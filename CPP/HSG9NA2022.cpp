#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, res = 0, i = 2;
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