#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
ll giaithua(ll n)
{
    if (n <= 1)
        return 1;
    else
        return n * giaithua(n - 1);
}
int main()
{
    ll q;
    cin >> q;
    while (q--)
    {
        ll n, k;
        cin >> n >> k;
        cout << (giaithua(n) / giaithua(k) * giaithua(n - k)) % mod << endl;
    }
}