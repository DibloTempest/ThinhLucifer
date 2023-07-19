#include <bits/stdc++.h>
using namespace std;
long long a[1000005], n, dem = 0, g = 0, gtln = 0, b[1000005];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dem = dem + a[i];
    }
    sort(a + 1, a + 1 + n);
    gtln = a[n];
    for (int i = n; i >= 1; i--)
    {
        g++;
        if (gtln > (dem - gtln))
        {
            cout << g;
            return 0;
        }
        gtln = gtln + a[i - 1];
    }
}