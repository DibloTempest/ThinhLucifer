#include <bits/stdc++.h>
#define nmax 1000000007
using namespace std;
long long a[500005], b[500005], s = 0, n;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = (b[i - 1] + a[i] + nmax) % nmax;
    }

    for (int i = 2; i <= n; i++)
        s = (s + b[i - 1] + a[i] * (i - 1) % nmax + nmax) % nmax;
    cout << s;
}