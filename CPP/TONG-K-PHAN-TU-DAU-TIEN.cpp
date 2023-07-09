#include <bits/stdc++.h>
using namespace std;
long long n, a[100004], s = 0, k;
main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= k; i++)
    {
        s = s + a[i];
    }
    cout << s;
}