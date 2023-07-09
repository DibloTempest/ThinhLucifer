#include <bits/stdc++.h>
using namespace std;
long long a, b, c, cd, cr;
main()
{
    cin >> a >> b >> c;
    if (a % c == 0)
    {
        cd = a / c;
    }
    else
    {
        cd = a / c + 1;
    }
    if (b % c == 0)
    {
        cr = b / c;
    }
    else
    {
        cr = b / c + 1;
    }
    cout << cd * cr;
}