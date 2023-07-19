#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[200005];
int main()
{
    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    for (ll i = 1; i <= n; i++)
    {
        if (a[i] > a[i - 1] && i > 1 && i % 2 != 0)
            swap(a[i], a[i - 1]);
        if (a[i] < a[i - 1] && i % 2 == s)
            swap(a[i], a[i - 1]);
    }
    cout << "YES"
         << "\n";
    for (ll i = 1; i <= n; i++)
        cout << a[i] << " ";
}