#include <bits/stdc++.h>
using namespace std;
long long a[1000000], n, Max = -1e9, Min = 1e9;
int main()
{
    cin >> n;

    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        Min = min(Min, a[i]);
        Max = max(Max, a[i]);
    }
    cout << Max - Min;
}