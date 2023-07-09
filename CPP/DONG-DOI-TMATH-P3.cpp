#include <bits/stdc++.h>
using namespace std;
int a[105][105], d[110], s[110], n, m;
int main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            if (a[j][i] > 0)
            {
                d[i]++;
                s[i] = s[i] + a[j][i];
            }
    }
    int ln = 0;
    for (int i = 1; i <= n; i++)
        ln = max(ln, d[i]);
    int mins = 1e9;
    for (int i = 1; i <= n; i++)
    {
        if (d[i] == ln)
        {
            mins = min(mins, s[i]);
        }
    }
    for (int i = 1; i <= n; i++)
        if (d[i] == ln and s[i] == mins)
            cout << i << " ";
}