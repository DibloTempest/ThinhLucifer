#include <bits/stdc++.h>
using namespace std;
long long t, n;
main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 9 == 0)
            cout << "YES";
        else
            cout << "NO";
    }
}