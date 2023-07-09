#include <bits/stdc++.h>
using namespace std;
long long n, x, d = 0;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> x;
    for (long long i = 1; i <= n; i++)
        if (i % x != 0)
            d++;
    cout << d;
}