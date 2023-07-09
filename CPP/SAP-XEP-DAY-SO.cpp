#include <bits/stdc++.h>
using namespace std;
int n, a[100004];
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        if (a[i] < 0)
            cout
                << a[i] << " ";
    cout << "0"
         << " ";
    for (int i = 1; i <= n; i++)
        if (a[i] > 0)
            cout
                << a[i] << " ";
}
