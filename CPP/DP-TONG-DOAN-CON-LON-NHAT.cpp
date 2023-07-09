#include <bits/stdc++.h>
using namespace std;
long long n, a[1000004], b[1000004];
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)

        cin >> a[i];
    b[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        b[i] = max(b[i - 1] + a[i], a[i]);
    }
    long long maxa = -1e9;
    for (int i = 1; i <= n; i++)
        maxa = max(maxa, b[i]);
    cout << maxa;
}