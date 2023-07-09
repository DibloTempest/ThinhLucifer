#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, k;
    cin >> n;
    cin >> k;
    ll m = k / n;
    ll r = k % n;

    cout << m << endl;
    cout << r;

    return 0;
}
