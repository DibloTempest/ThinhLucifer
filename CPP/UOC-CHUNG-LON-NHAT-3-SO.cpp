#include <bits/stdc++.h>
using namespace std;
long long a, b, c;
main()
{
    cin >> a >> b >> c;
    cout << __gcd(__gcd(a, b), c);
}
