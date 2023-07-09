#include <bits/stdc++.h>
using namespace std;
long long a[1004], x, n, uc;
main()
{
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        uc = __gcd(a[i], x);
        if (uc > 1)
            cout << i << " ";
    }
}