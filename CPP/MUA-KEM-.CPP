#include <bits/stdc++.h>
using namespace std;
int a[10004], b[10004], c[10004];
int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        memset(c, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        cin >> m >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (m > a[i] && b[m - a[i]] > 0)
            {
                cout << b[m - a[i]] << " " << i << "\n";
            }
            b[a[i]] = i;
        }
    }
}