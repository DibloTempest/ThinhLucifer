#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("SOLAP.inp", "r", stdin);
    freopen("SOLAP.out", "w", stdout);
    long long n, d = 0;
    cin >> n;
    long long a[10004];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (long long i = 1; i <= n; i++)
    {
        long long j = i + 1;
        while (j <= n)
        {
            if (a[i] == a[j])
            {
                for (long long k = j; k <= n; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        d++;
    }
    cout << d;
}
