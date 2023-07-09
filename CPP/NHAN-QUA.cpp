#include <bits/stdc++.h>
using namespace std;
long long n, a[100004], b[100004], d = 1, maxa = 0;
int main()
{
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (long long i = 1; i <= n; i++)
    {
        maxa = max(a[i], maxa);
        if (maxa = a[i])
            d++;
    }
    cout << d;
}