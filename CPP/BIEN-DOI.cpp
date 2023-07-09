#include <bits/stdc++.h>
using namespace std;
long long a, b, d = 0;

main()
{
    cin >> a >> b;
    while (a != 0 or b != 0)
    {
        if (a >= b)
            a = a - b;
        if(b>=a)
            b = b - a;
        d++;
    }
    cout << d;
}