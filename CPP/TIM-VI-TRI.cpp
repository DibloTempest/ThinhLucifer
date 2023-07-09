#include <bits/stdc++.h>
using namespace std;
long double n, a[104], x;
main()
{
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < 0)
        {
            cout << setprecision(2) << fixed<< a[i]  << " ";
            break;
        }
    }
    for (int i = n; i >= 1; i--)
    {
        if (a[i] >= 0)
        {
            cout << setprecision(2) << fixed<< a[i]  << " ";
              break;
        }
    }
    cout << "\n";
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == x)
        {
            cout << i << " ";
            break;
        }
    }
    for (int i = n; i >= 1; i--)
    {
        if (a[i] == x)
        {
            cout << i << " ";
            break;
        }
    }
}
