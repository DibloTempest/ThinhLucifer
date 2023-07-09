#include <bits/stdc++.h>
using namespace std;
int n, a[100004], s = 0;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0 and a[i] % 3 == 0)
            s = s + a[i];
    }
    cout << s;
}