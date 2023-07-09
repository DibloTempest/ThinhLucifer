#include <bits/stdc++.h>
using namespace std;
long long n, k;
main()
{
    cin >> n;
    long long s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + i;
        if (s == n)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}