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
long long pt1(long long n)
{
    long long dem = 0;
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0)
        {
            dem++;
            while (n % i == 0)
            {
                n = n / i;
            }
        }
    if (n > 1)
        dem++;
    return dem;
}
main()
{
    ll n;
    cin >> n;
    cout << pt1(n) << endl;
    pt(n);
    for (auto x : tsnt)
    {
        cout << x.first << " " << x.second << "\n";
    }
}
