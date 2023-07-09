#include <bits/stdc++.h>
using namespace std;
long long s[1000004], a[1000004], k, n;
main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    long long d = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
            if (s[j] - s[i - 1] == k)
                d++;
    }
    cout << d;
}