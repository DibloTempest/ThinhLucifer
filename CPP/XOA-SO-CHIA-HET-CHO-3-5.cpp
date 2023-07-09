#include <bits/stdc++.h>
using namespace std;
long long n, a[100004];
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 3 != 0)
            cout << a[i] << " ";
    }
    cout << "\n";
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 3 != 0 and a[i] % 5 != 0)
            cout << a[i] << " ";
    }
}