#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[100004], x, d = 0;
bool scp(ll n)
{
    ll k = sqrt(n);
    if (k * k == n)
        return true;
    else
        return false;
}
main()
{
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (scp(a[i]) == true and a[i] > x)
        {
            cout << a[i] << " ";
            d++;
        }
    }
    if (d == 0)
        cout << -1;
}
