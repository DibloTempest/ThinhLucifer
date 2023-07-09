#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, x, y;
    cin >> a >> b >> x >> y;

    long long lcm = (x * y) / __gcd(x, y);

    long long count = 0;
    count = (b / x) + (b / y) - (b / lcm);

    if (a > 1)
    {
        count -= ((a - 1) / x) + ((a - 1) / y) - ((a - 1) / lcm);
    }

    cout << count;

    return 0;
}
