#include <bits/stdc++.h>
using namespace std;
long long a[100005], n, UCLN;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    UCLN = a[1];
    for (int i = 1; i <= n; i++)
    {
        UCLN = __gcd(UCLN, a[i]);
    }
    cout << UCLN;
}