#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[200005];
int main()
{
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];

    sort(a + 1, a + n + 1);
    ll day = 1;
    for (ll i = 1; i <= n; i++)
    {
        if (a[i] >= day)
            day++;
    }
    cout << day - 1;
}