#include <bits/stdc++.h>
using namespace std;
long long n, a[100004], t, k;
main()
{
    cin >> t;
    while (t--)
    {
        long long ln = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        ln = a[1] + a[n];
        for (int i = 1; i <= n - 1; i++)
        {
            k = a[i] + a[i + 1];
            if (k > ln)
                ln = k;
        }
        cout << ln << "\n";
    }
}