#include <bits/stdc++.h>
using namespace std;
int a[100004], b[1004], n, x;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    int ln = 0;
    for (int i = 1; i <= 1000; i++)
    {
        ln = max(ln, b[i]);
    }
    for (int i = 1; i <= 1000; i++)
        if (b[i] == ln)
            cout << i << endl;
}