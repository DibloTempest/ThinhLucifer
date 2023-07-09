#include <bits/stdc++.h>
using namespace std;
long long n, a[1000004], s1 = 0, s2 = 0;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 0)
            s1 = s1 + a[i];
        else
            s2 = s2 + a[i];
    }
    cout << s1 << "\n"
         << s2;
}