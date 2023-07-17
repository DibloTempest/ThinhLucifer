#include <bits/stdc++.h>
using namespace std;
long long n, x, h, a[1000004];
int main()
{
    cin >> n >> x;
    for (long long i = 1; i <= n - 1; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1, greater<long long>());
    for (long long i = 1; i <= n; i++)
        if (x >= a[i])
            return cout << h + 1, 0;
        else
            h++;
}