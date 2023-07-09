#include <bits/stdc++.h>
using namespace std;
long long n, a[1000004], s = 0;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        if (a[i] > 0)
            s = s + a[i];
    cout << s;
}