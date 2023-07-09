#include <bits/stdc++.h>
using namespace std;
long long a[1000000], n, dem = 0, x;
int main()
{

    cin >> n >> x;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    for (long long i = 1; i < n; i++)
        for (long long j = i + 1; j <= n; j++)
            if (a[i] + a[j] == x)
                dem++;
    cout << dem;
}
