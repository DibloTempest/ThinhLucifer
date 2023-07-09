#include <bits/stdc++.h>
using namespace std;
long long b[100004], a[100004], n;
main()
{

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    b[0] = 0;
    if (a[1] < 0)
        b[1] = 0;
    else
        b[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        b[i] = max(b[i - 1], a[i] + b[i - 2]);
    }
    cout << b[n];
}