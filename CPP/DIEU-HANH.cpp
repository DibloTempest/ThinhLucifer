#include <bits/stdc++.h>
using namespace std;
int n, k, a[1000004], nam[2004], nu[2004];
main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
            nam[a[i]]++;
        else
            nu[abs(a[i])]++;
    }
    long long ans = 0;
    for (int i = 1500; i <= 2000; i++)
        if (nam[i] > 0)
        {
            for (int j = 0; j <= k; j++)
                ans = ans + nam[i] * nu[i - j];
        }
    cout << ans;
}