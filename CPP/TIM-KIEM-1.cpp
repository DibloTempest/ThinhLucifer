#include <bits/stdc++.h>
using namespace std;
long long n, l, r, a[1003], b[1003];
main()
{
    cin >> n >> l >> r;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    for (int i = l; i <= r; i++)
    {
        if (b[i] == 0)
            cout << i << " ";
    }
}