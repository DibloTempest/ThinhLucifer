#include <bits/stdc++.h>
using namespace std;
long long n, a[1003], d = 0;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            d = d + 1;
    }
}