#include <bits/stdc++.h>
using namespace std;
long long a, b, d = 0;
main()
{
    cin >> a >> b;
    for (long long i = a; i <= b; i++)
    {
        if (i % 2 != 0)
            d = d + i;
    }
    cout << d;
}