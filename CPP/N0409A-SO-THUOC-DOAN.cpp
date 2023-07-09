#include <bits/stdc++.h>
using namespace std;
long long n, a[10000004];
main()
{
    long long d = 0;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] >= 500 and a[i] <= 3000)
            d++;
    }
    cout << d;
}