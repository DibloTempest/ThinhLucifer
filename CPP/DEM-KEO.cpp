#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[1000006], s = 0;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        s += a[i];
    cout << s;
}