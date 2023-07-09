#include <bits/stdc++.h>
using namespace std;
long long a[1100], n;
main()
{
    long long s = 0;
    cin >> n;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];

    for (long long i = 1; i <= n; i++)
    {
        if (a[i] % 3 == 0)
            s++;
    }
    cout << s;
}