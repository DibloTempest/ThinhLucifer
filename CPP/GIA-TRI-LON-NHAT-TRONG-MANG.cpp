#include <bits/stdc++.h>
using namespace std;
long long n, a[100004], ln = -1e9;
main()
{
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        ln = max(ln, a[i]);
    }
    cout << ln;
}