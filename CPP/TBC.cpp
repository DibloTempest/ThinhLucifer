#include <bits/stdc++.h>
#define nmax 10000007
using namespace std;
long double n, a[101], tbc = 0, s = 0, cl = 0;
int main()
{
    freopen("TCB.inp", "r", stdin);
    freopen("TCB.out", "w", stdout);
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        s = s + a[i];
    }
    tbc = tbc + s / n;
    cout << tbc << end;
    for (long long i = 1; i <= n; i++)
    {
        long long tbc1 = abs(tbc - a[i]);
        cl = min(cl, tbc1);
    }
    cout << cl;
