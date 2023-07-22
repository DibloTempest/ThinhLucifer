#include <bits/stdc++.h>
using namespace std;
long long n, l, r, a[1001], b[1003];
int main()
{
    cin >> n >> l >> r;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    for (long long i = l; i <= r; i++)
        if (b[i] == 0)
            cout << i << ' ';
}