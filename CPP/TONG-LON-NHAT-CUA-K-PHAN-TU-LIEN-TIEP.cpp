#include <bits/stdc++.h>
using namespace std;
long long n, k, a[1000004], f[1000004], res = 0;
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }
    for (int i = 1; i <= n - k + 1; i++)
        res = max(res, f[i + k - 1] - f[i - 1]);
    cout << res;
    return 0;
}