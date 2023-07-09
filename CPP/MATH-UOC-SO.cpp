#include <bits/stdc++.h>
#define ll long long
using namespace std;
// map<key,value> t�n map;
map<ll, ll> mp;
void fact(ll x)
{
    int s = sqrt(x);
    for (ll i = 2; i <= s and i <= x; i++)
    {
        while (x % i == 0)
        {
            mp[i]++;
            x /= i;
        }
    }
    if (x > 1)
        mp[x]++, x = 1;
}
ll t, a, b, kq = 1;
int main()
{
    cin >> t;
    while (t--)
    {
        kq = 1;
        cin >> a >> b;
        fact(a);
        fact(b);
        for (auto x : mp)
        {
            kq *= (x.second + 1);
            mp[x.first] = 0;
        }
        cout << kq << '\n';
    }
}
