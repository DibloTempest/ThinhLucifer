#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[100005];

int main()
{
    cin >> n;
    for (ll i = 1; i <= 2 * n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);

    sort(a + 1 + n, a + 2 * n + 1, greater<ll>());
    for (ll i = 1; i <= 2 * n; i++)
        cout << a[i] << " ";
}