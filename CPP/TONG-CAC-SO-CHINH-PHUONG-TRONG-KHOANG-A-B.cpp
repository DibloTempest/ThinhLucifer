#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool scp(ll n)
{
    ll k = sqrt(n);
    if (k * k == n)
        return true;
    else
        return false;
}
main()
{
    ll a, b, s = 0;
    cin >> a >> b;
    for (long long i = a; i <= b; i++)
        if (scp(i) and i > a and i < b)
            s += i;
    cout << s;
}