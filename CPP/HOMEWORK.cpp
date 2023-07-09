#include <bits/stdc++.h>
using namespace std;
long long n, s, a[1004], d = 0;
main()
{
	 freopen("HOMEWORK.inp", "r", stdin);
    freopen("HOMEWORK.out", "w", stdout);
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (s >= a[i])
        {
            d++;
            s = s + a[i];
        }
    }
    cout << d;
}
