#include <bits/stdc++.h>
using namespace std;
long long n, maxa, a[1000004];
int main()
{
    maxa = -1e9;
    cin >> n;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    for (long long i = 1; i < n; i++)
        for (long long j = i + 1; j <= n; j++)
            if (a[j] - a[i] > maxa)
                maxa = a[j] - a[i];
    cout << maxa;
    return 0;
}