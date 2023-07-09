#include <bits/stdc++.h>
long double a, b;
long long x, y;
using namespace std;
int main()
{
    cin >> a >> b;
    if (a >= b)
        swap(a, b);
    x = (long long)(a);
    y = (long long)(b);
    if (a < 0)
    {
        cout << y - x + 1;
        return 0;
    }

    if (a == x)
        cout << y - x + 1;
    else
        cout << y - x;
    return 0;
}