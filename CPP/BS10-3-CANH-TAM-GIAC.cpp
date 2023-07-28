#include <bits/stdc++.h>
using namespace std;
long n, i, j, k, tmp, res, a[5005];
int main()
{

    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (i = 1; i < n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            tmp = lower_bound(a + j + 1, a + n + 1, a[i] + a[j]) - a;
            res = res + (tmp - j - 1);
        }
    }
    cout << res;
}