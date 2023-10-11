#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("DOANCON1.inp", "r", stdin);
    freopen("DOANCON1.OUT", "w", stdout);
    int n, a[1000], b[1000];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = 1;
    }
    for (int i = n; i >= 1; i--)
    {
        if (a[i] >= a[i - 1])
        {
            b[i - 1] += b[i];
        }
    }
    int m = b[1];
    for (int i = 1; i <= n; i++)
    {
        if (m < b[i])
            m = b[i];
    }
    cout << m << endl;
    int vt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == m)
            vt = i;
    }
    return 0;
}