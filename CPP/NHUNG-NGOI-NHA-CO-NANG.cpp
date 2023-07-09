#include <bits/stdc++.h>
using namespace std;
long long n, a[100005], d = 1, t, maxa;
main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        maxa = a[1];
        d = 1;
        for (int i = 2; i <= n; i++)
            if (a[i] >= maxa)
            {
                d++;
                maxa = a[i];
            }

        cout << d << "\n";
    }
}