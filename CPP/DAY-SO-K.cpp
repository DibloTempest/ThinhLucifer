#include <bits/stdc++.h>
using namespace std;
int n, a[1000004], b[1000004], k;
main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    int cnt = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (b[i] >= k)
        {
            cout << i << " ";
            cnt++;
        }
    }
    if (cnt == 0)
        cout << "NO";
}