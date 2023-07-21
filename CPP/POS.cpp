#include <bits/stdc++.h>
using namespace std;
long long n;
long double a[11], x, dem;
int main()
{

    freopen("ARRSORT.inp", "r", stdin);
    freopen("ARRSORT.out", "w", stdout);
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (long long i = 1; i <= n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
    sort(a + 1, a + n + 1, greater<long long>());
    for (long long i = 1; i <= n; i++)
    {
        cout << a[i] << ' ';
    }
}