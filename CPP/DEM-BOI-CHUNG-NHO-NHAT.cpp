#include <bits/stdc++.h>
using namespace std;
long long a[104], n, dem = 0, k;
int main()
{

    cin >> n >> k;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    for (long long i = 1; i < n; i++)
        for (long long j = i + 1; j <= n; j++)
            if (a[i] / (__gcd(a[i], a[j])) <= k / a[j])
                dem++;
    cout << dem;
}
