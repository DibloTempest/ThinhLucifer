#include <bits/stdc++.h>
using namespace std;
int n, a[1000004], b[1000004], dem = 1;
int main()
{
    freopen("CPLOAI.inp", "r", stdin);
    freopen("CPLOAI.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    sort(a + 1, a + n + 1);
    for (int i = 2; i <= n; i++)
        if (a[i] != a[i - 1])
            dem++;
    cout << dem << "\n";

    for (int i = 1; i <= n; i++)
    {
        if (b[a[i]] != 0)
        {
            cout << a[i] << " ";
            b[a[i]] = 0;
        }
    }
}
