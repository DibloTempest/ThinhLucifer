#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll giaithua(ll n)
{
    if (n <= 1)
        return 1;
    else
        return n * giaithua(n - 1);
}
ll dem(ll n, ll k)
{
    ll permutations = giaithua(n) / giaithua(n - k);
    return permutations;
}

int main()
{
    ll n, k;
    cin >> n;
    cin >> k;

    ll count = dem(n, k);

    cout << count;

    return 0;
}
