#include <bits/stdc++.h>
using namespace std;
long long n, k, d = 0, s = 0;
main()
{
    cin >> n >> k;
    for (int i = n; i >= 1; i++)
    {
        s = s + k;
        k = k * 2;
        d++;
        if (s >= n)
        {
            cout << d;
            return 0;
        }
    }
}