#include <bits/stdc++.h>
using namespace std;
long long n, d = 0, a[1004];
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            d++;
    }
    cout << d;
}