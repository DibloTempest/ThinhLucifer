#include <bits/stdc++.h>
using namespace std;
int n, a[104];
main()
{
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    cout << a[1];
}