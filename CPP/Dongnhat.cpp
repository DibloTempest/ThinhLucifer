#include <bits/stdc++.h>
using namespace std;
long long n, a[508], dp[508];
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == a[i - 1]) cout<<a[i-1];
    }
}