#include <bits/stdc++.h>
using namespace std;
long long a[110], n;
main()
{
    long long s = 0;
    cin >> n;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];

    for (long long i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 0)
            s = s + a[i];
    }
    cout << s;
}