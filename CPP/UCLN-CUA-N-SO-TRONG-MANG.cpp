#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, UCLN;
    cin >> n;
    int a[n];
    cin >> a[0];
    UCLN = a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        UCLN = __gcd(UCLN, a[i]);
    }
    cout << UCLN;
}