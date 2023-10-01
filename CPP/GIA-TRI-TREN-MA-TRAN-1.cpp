#include <bits/stdc++.h>
using namespace std ;
long long m, n, q, a[1005][1005], x, y;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m >> q;
    for(long long  i = 1 ; i <= n ; i++)
        for(long long j = 1 ; j <= m ; j++)
            cin >> a[i][j];
    while(q--)
    {
        cin >> x >> y;
        cout << a[x][y] << '\n';
    }
}