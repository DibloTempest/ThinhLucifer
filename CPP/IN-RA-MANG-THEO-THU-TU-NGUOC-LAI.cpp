#include <bits/stdc++.h>
using namespace std;
long long n, d = 0, a[1000004];
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = n; i >= 1; i--)
    {
        cout << a[i] << " ";
    }
}