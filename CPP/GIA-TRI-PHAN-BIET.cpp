#include <bits/stdc++.h>
using namespace std;
const long long MAXN = 100005;

int main()
{
    long long n, a[MAXN], b[MAXN];
    memset(b, 0, sizeof(b));
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    long long maxn = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > maxn)
        {
            maxn = a[i];
        }
    }

    long long dem = 0;
    for (long long i = 1; i <= maxn; i++)
    {
        if (b[i] != 0)
        {
            dem++;
        }
    }

    cout << dem << endl;

    return 0;
}
