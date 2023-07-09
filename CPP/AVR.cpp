#include <bits/stdc++.h>
using namespace std;
#define MAXN 1000005
long long b[MAXN], n, res = 0, ans;
int main()
{
    freopen("AVR.inp", "r", stdin);
    freopen("AVR.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    res = b[1];
    cout << b[1] << " ";
    ans = b[1];
    for (int i = 2; i <= n; i++)
    {
        ` ans = b[i] * i - res;
        res += ans;
        cout << ans << " ";
    }
}
