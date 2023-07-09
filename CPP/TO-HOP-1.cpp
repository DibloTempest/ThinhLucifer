#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll tich(ll begin, ll end)
{
    ll res = 1;
    for (int i = begin; i <= end; i++)
    {
        res *= i;
    }
    return res;
}
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        ll n, k;
        cin >> n >> k;
        cout << tich(k + 1, n) / tich(1, n - k) << endl;
    }
}