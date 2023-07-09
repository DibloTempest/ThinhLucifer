#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 4;
int n, a[N], mi[N], mx[N];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        mx[i] = max(mx[i - 1], a[i]);
    }
    mi[n + 1] = 1e9;
    for (int i = n; i >= 1; i--)
        mi[i] = min(mi[i + 1], a[i]);
    long long asw = -1e18;
    for (int i = 1; i <= n; i++)
        asw = max(asw, (long long)a[i] + mx[i - 1] - mi[i + 1]);
    cout << asw;
}