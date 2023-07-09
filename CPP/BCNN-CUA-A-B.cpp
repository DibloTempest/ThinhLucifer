#include <bits/stdc++.h>
using namespace std;
long long a, b;
main()
{
    cin >> a >> b;
    cout << (a * b) / __gcd(a, b);
}