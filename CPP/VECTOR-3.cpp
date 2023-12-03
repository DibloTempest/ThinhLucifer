#include <bits/stdc++.h>
using namespace std;
int m, n, q;
vector<vector<int>> a;
int main()
{
    cin >> m >> n;
    a.resize(m, vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    cin >> q;
    while (q--)
    {
        int x, y, u, v, s = 0;
        cin >> x >> y >> u >> v;
        for (int i = x; i <= u; i++)
            for (int j = y; j <= v; j++)
                s += a[i - 1][j - 1];
        cout << s << endl;
    }
}
