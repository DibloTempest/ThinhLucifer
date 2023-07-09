#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    long double a, t;
    cin >> t;
    while (t--)
    {
        cin >> a;
        if (cbrt(a) == int(cbrt(a)) && sqrt(a) == int(sqrt(a)))
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
}