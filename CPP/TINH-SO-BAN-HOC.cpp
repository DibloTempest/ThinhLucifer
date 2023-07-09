#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (a % 2 == 0)
        a = a / 2;
    else
        a = (a + 1) / 2;
    if (b % 2 == 0)
        b = b / 2;
    else
        b = (b + 1) / 2;
    if (c % 2 == 0)
        c = c / 2;
    else
        c = (c + 1) / 2;
    cout << a + b + c;

    return 0;
}
