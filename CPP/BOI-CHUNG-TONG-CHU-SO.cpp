#include <bits/stdc++.h>
using namespace std;
long long a, b;
long long tt(long long n)
{
    long long s = 0;
    while (n > 0)
    {
        s = s + n % 10;
        n = n / 10;
    }
    return s;
}

main()
{
    cin >> a >> b;
    long long s, q;
    s = tt(a);
    q = tt(b);
    cout << s * q / __gcd(s, q);
}
