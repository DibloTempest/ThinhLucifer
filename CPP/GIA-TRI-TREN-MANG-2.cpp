#include <bits/stdc++.h>
using namespace std;
long long m, n, q, x, d = 0, a[1004][1004], b[1004][1004];
struct ch
{
  long long hang, cot;
};
ch b[10000004];

int main()
{
    cin >> n >> m >> q;
    for (long long i = 1; i <= n; i++)
        for (long long j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            b[a[i][j]].hang = i;
            b[a[i][j]].cot = j;
        }
    while (q--)
    {
        cin>>x;
        if(b[x].hang>0)
            cout << b[x].hang << " " << b[x].cot << endl;
            else
                cout << -1 << endl;
    }
}