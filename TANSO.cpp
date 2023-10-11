#include <bits/stdc++.h>
using namespace std;
int n, a[1000004], b[1000004];
int main()
{
	freopen("TANSO.inp", "r", stdin);
    freopen("TANSO.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (b[a[i]] != 0)
        {
            cout << a[i] << " " << b[a[i]] << "\n";
            b[a[i]] = 0;
        }
    }
}
