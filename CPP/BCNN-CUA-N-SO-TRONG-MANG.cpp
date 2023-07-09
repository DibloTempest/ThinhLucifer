#include <bits/stdc++.h>
using namespace std;
long long n, BCNN, a[100004];
int main()
{
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    BCNN = a[1];
    for (long long i = 1; i <= n; i++)
    {
        BCNN = BCNN / __gcd(BCNN, a[i]) * a[i];
    }
    cout << BCNN;
}