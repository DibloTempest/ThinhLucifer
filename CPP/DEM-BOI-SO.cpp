#include <bits/stdc++.h>
using namespace std;
long long a, n, b, c, d = 0;
main()
{
    cin >> n >> a >> b >> c;
    long long ab = (a * b) / __gcd(a, b);
    long long bc = (ab * c) / __gcd(ab, c);
    long long bc1 = (c * b) / __gcd(c, b);
    long long ac = (a * c) / __gcd(a, c);
    cout << n / ab + n / bc1 + n / ac - 3 * (n / bc);
}