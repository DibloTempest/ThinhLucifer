#include <bits/stdc++.h>
using namespace std;
long long n, a[1004], d = 0;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (10 <= a[i] and a[i] <= 99)
            d++;
    }
    cout << d;
}