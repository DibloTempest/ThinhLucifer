#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll m, n, maxm = -1e9, a[205][205];
int main()
{
    cin >> m >> n;
    for (long long i = 1; i <= m; i++)
        for (long long j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    for (long long i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
        {

            maxm = max(maxm, a[i][j]);
        }
        cout << maxm << endl;
        maxm = -1e9;
    }
}