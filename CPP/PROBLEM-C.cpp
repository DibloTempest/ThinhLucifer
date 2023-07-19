#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[200005], mina = 1e9;

int main()
{
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1, greater<ll>());
    for (ll i = 1; i <= n; i++)
        mina = min(mina, abs(a[i] - a[i - 1]));
    cout << mina;
}