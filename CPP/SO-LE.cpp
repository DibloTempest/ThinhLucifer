#include <bits/stdc++.h>
using namespace std;
long long n, s = 0;
main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            s = s + i;
    }
    cout << s;
}