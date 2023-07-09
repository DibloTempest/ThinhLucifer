#include <bits/stdc++.h>
using namespace std;
int n, a[1004], k;
main()
{
    cin >> n;
    cin >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    if (k >= a[1] and k <= a[n])
    {
        int vtri;
        for (int i = 1; i <= n; i++)
            if (a[i] <= k and k <= a[i + 1])
            {
                cout << i + 1 << "\n";
                vtri = i + 1;
                break;
            }
        for (int i = 1; i <= vtri - 1; i++)
            cout << a[i] << " ";
        cout << k << " ";
        for (int i = vtri; i <= n; i++)
            cout << a[i] << " ";
    }
    else if (k < a[1])
    {
        cout << 1 << "\n";
        cout << k << " ";
        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
    }
    else if (k > a[n])
    {
        cout << n + 1 << "\n";
        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << k;
    }
}