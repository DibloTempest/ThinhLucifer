#include <bits/stdc++.h>
using namespace std;
long long a, b, k;
int main()
{
    cin >> a >> b >> k;
    if (k - b > a)
        a = k - b;
    if (k - a < b)
        b = k - a;
    if (b - a + 1 <= 0)
        cout << 0;
    else
        cout << (b - a + 1) / 2;
}