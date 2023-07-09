#include <bits/stdc++.h>
using namespace std;

main()
{
    long long a, b, s1 = 1, s2 = 1;
    while (cin >> a >> b)
    {
        s1 = s1 * a;
        s2 = s2 * b;
        long long ucln = __gcd(s1, s2);
        s1 = s1 / ucln;
        s2 = s2 / ucln;
    }
    cout << s1 << " " << s2;
}
