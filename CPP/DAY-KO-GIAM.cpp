#include <bits/stdc++.h>
using namespace std;
long long a[1000004], n, c;
main()
{
    cin >> n;
    c = 1e18;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    for (long long i = 2; i <= n; i++)
    {
        if (a[i] < a[i - 1])
        {
            cout << "NO"
                 << "\n";
            cout << i;
            return 0;
        }
    }
    cout << "YES"
         << " ";
}