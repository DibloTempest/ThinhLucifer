#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, x, n;
    cin >> a >> b >> x;
    while (a % x != 0)
        a++;
    while (b % x != 0)
        b--;
    n = (b - a) / x + 1;
    cout << n;
}