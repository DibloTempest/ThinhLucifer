#include <bits/stdc++.h>
using namespace std;
long long s[1000004], a[1000004], maxa = -1e9, n;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    s[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        if (s[i - 1] + a[i] < a[i])
            s[i] = a[i];
        else
            s[i] = s[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        maxa = max(s[i], maxa);
    }
    cout << maxa;
}