#include <bits/stdc++.h>
using namespace std;
long long a, b, c;
main()
{
    cin >> a >> b >> c;
    if (a > 0 and b > 0 and c > 0)
        cout << a * b * c;
    else if (a > 0 and b > 0)
        cout << a * b;
    else if (c > 0 and b > 0)
        cout << c * b;
    else if (a > 0 and c > 0)
        cout << a * c;
}