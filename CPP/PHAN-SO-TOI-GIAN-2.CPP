#include <bits/stdc++.h>
using namespace std;
long long ucln, a, b;
main()
{
    cin >> a >> b;
    ucln = __gcd(a, b);
    cout << a / ucln << "/" << b / ucln;
}