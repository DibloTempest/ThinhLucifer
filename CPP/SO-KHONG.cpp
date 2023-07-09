#include <bits/stdc++.h>
using namespace std;
int n, d;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int i = 1;
    d = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= d; i++)
            cout << "0";
        d = d + 1;
        cout << "\n";
    }
}
