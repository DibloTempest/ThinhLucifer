#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;
int main()
{
    long double l, r;
    cin >> l >> r;
    ull res1 = sqrt(r), res2 = sqrt(l - 1);
    cout << res1 - res2;

    return 0;
}
