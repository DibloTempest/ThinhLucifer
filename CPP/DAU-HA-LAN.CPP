#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d;
main()
{

    cin >> a;
    d = 0;
    for (int i = 1; i <= a; i++)
    {
        cin >> b >> c;
        if (b == c * 3 or c == b * 3)
            d = d + 1;
    }
    cout << d;
}