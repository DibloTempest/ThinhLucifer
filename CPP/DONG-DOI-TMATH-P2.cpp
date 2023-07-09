#include <bits/stdc++.h>
using namespace std;
long long a[105][105], n, s = 0, m;
int main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    long long nn = 1e9;
    for (int i = 1; i <= n; i++)
    {
        s = 0;
        for (int j = 1; j <= m; j++)
            s = s + a[j][i];
        nn = min(nn, s);
    }
    cout << nn << "\n";
    for (int i = 1; i <= n; i++)
    {
        s = 0;
        for (int j = 1; j <= m; j++)
            s = s + a[j][i];
        if (s == nn)
            cout << i << " ";
    }
}