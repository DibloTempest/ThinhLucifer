#include <bits/stdc++.h>
using namespace std;
long long n, k, a[100005];
int main()
{
    cin >> n >> k;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = i + 1; j <= n; j++)
        {
            if ((a[i] + a[j]) / 2 == k)
                return cout << 1, 0;
        }
    }
    cout << 0;
}
