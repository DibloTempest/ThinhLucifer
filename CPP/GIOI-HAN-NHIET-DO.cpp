#include <bits/stdc++.h>
using namespace std;
long long n, l, h, a[1000004];
main()
{
    long long d = 0;
    cin >> l >> h >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)

        if (a[i] >= l and a[i] <= h)
            d++;
    cout << d;
}