#include <bits/stdc++.h>
using namespace std;
long long n, a[100004], s, b[10004];
main()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    long long cnt = 0, cnt1 = 0;
    for (int i = 1; i <= 10000; i++)
        if (b[i] > 0)
        {
            if (i * 2 == s)
                cnt = cnt + ((b[i] - 1) * b[i]) / 2;
            else
                cnt1 = cnt1 + b[i] * b[s - i];
        }
    cout << cnt1 / 2 + cnt;
}