#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<pair<ll, ll>> tsnt;
void pt(ll n)
{
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ll dem = 0;
            while (n % i == 0)
            {
                dem++;
                n = n / i;
            }
            tsnt.push_back({i, dem});
        }
    }
    if (n > 1)
        tsnt.push_back({n, 1});
}
main()
{
    ll n;
    cin >> n;
    pt(n);
    ll s = 0, p = 0;
    for (auto x : tsnt)
    {
        if (x.second % 2 == 0)
            s += x.second;
        else
            p += x.second;
    }
    cout << s << endl
         << p;
}
