#include <bits/stdc++.h>
using namespace std;
long long d[10], k;
main()
{
    for (int i = 1; i <= 3; i++)
        cin >> d[i];
    cin >> k;
    sort(d + 1, d + 3 + 1);
    long long ans = 0;
    if (d[1] > d[2] - k)
        ans = d[1] - d[2] + k;
    if (d[3] < d[2] + k)
        ans = ans + d[2] + k - d[3];
    cout << ans;
}