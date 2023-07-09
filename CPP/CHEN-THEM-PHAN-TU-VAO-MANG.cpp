#include <bits/stdc++.h>
using namespace std;
long long n, x, k, a[1000004];
main()
{
    cin >> n >> k >> x;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= k - 1; i++)
        cout << a[i] << " ";
    cout << x << " ";
    for (int i = k; i <= n; i++)
        cout << a[i] << " ";
}