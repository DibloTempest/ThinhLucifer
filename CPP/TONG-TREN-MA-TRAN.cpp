#include <bits/stdc++.h>
using namespace std;
int a[110][110], n;
main()
{
    long long s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            s = s + a[i][j];
    }
    cout << s;
}