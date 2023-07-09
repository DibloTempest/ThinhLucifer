#include <bits/stdc++.h>
using namespace std;
int n, a[1000004], d = 0;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (a[n] == a[i])
        {
            d = d + 1;
        }
    }
    cout << d << "\n";
    cout << a[n];
}