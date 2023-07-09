#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll nhanando(ll a, ll b, ll c)
{
    if (b == 0)
        return 0;
    ll tam = nhanando(a, b / 2, c);
    tam = (tam + tam) % c;
    if (b % 2 == 1)
        tam = (tam + a) % c;
    return tam;
}
ll pw(ll a, ll n)
{
    if (n == 0)
        return 1;
    ll tam = pw(a, n / 2);
    tam = (tam * tam) % mod;
    if (n % 2 == 1)
        tam = tam * a % mod;
    return tam;
}
main()
{
    ll a, n;
    cin >> a >> n;
    cout << pw(a, n);
}