#include <bits/stdc++.h>
using namespace std;
long long n, a[100005], k = 0;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1, greater<long long>());
    for (int i = 1; i <= n; i++)
        if (a[i] <= i)
            k = max(k, a[i]);
    cout << k;
}