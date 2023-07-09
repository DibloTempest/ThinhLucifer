#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long n, a, f[200005], maxa = -1e9;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        f[a]++;
        maxa = max(maxa, a);
    }
    for (int i = maxa; i >= 1; i--)
    {
        ll tmp = 0;
        for (int j = i; j <= maxa; j += i)
            tmp += f[j];
        if (tmp >= 2)
        {
            cout << i;
            return 0;
        }
    }
}