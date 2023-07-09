#include <bits/stdc++.h>
using namespace std;
long long n, a[100004], x, s = 0;
main()
{
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (x % a[i] == 0)
            s = s + a[i];
    }
    cout << s;
}