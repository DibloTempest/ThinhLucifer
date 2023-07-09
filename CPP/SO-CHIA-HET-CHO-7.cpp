#include <bits/stdc++.h>
using namespace std;
long long n, a[1000004];
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 7 == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}