#include <bits/stdc++.h>
using namespace std;
long long n, a[100004], p, d = 0;
main()
{
    cin >> n >> p;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < p)
            d++;
    }
    cout << d;
}