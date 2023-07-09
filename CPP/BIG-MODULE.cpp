#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll sqr(ll x)
{
    return x * x;
}

ll pow(ll a, ll b, ll MOD)
{
    if (b == 0)
        return 1 % MOD;
    else if (b % 2 == 0)
        return sqr(pow(a, b / 2)) % MOD;
    else
        return a * (sqr(pow(a, b / 2)) % MOD) % MOD;
}
main()
{
    m long long a, b, c;
    cin >> a >> b >> c;
    cout << pow(a, b, c);
}