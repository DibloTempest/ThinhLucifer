#include <bits/stdc++.h>
using namespace std;
long long n, a[1005], k = 0;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
        if (a[i] <= n - i + 1)
            k = max(k, a[i]);
    cout << k;
}