#include <bits/stdc++.h>
using namespace std;
long long a, b, d = 0;
main()
{

    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (i % 3 == 0)
            d = d + 1;
    }
    cout << d;
}