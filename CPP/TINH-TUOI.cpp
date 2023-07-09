#include <bits/stdc++.h>
using namespace std;
long long n, a[1000004], b[1000004];
main()
{
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    long long d = 0;
    for (long long i = 0; i <= 1000004; i++)
    {
        if (b[i] > 0)
            d++;
    }
    cout << d;
}