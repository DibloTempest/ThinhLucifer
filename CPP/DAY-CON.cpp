#include <bits/stdc++.h>
using namespace std;
int main()
{

    long a[105], i, n, max, vt;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    max = a[1];
    for (i = 1; i <= n; i++)
        if (max < a[i])
            max = a[i];
    vt = 1;
    for (i = 1; i <= n; i++)
        if (max == a[i])
            vt = i;
    cout << max << endl;
    cout << vt;
    return 0;
}