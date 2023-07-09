#include <bits/stdc++.h>
using namespace std;
long long n, a[104], x, d = 0;
main()
{
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] >= x)
            d++;
    }
    cout << d;
}