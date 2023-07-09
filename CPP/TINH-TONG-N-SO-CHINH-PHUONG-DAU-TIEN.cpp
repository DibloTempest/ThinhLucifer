#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll tongnscp(ll n)
{
    ll sum = (n * (n + 1) * (2 * n + 1)) / 6;
    return sum;
}

int main()
{
    ll n;
    cin >> n;
    cout << tongnscp(n) % 2022;

    return 0;
}
