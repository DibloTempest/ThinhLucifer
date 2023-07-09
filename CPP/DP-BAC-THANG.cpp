#include <bits/stdc++.h>
using namespace std;
long long n, k, dp[1000004];
bool hong[1000004];
main()
{
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        int x;
        cin >> x;
        hong[x] = 1;
    }
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        if (hong[i] == 0)
        {
            dp[i] = (dp[i - 1] + dp[i - 2]) % 14062008;
        }
    }
    cout << dp[n];
}