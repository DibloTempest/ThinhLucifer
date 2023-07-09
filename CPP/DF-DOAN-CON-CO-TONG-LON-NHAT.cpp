#include <bits/stdc++.h>
using namespace std;
long long f[100004], b[100004], a[100004], subarr, Subseq = 0, n, t;
main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        memset(b, 0, sizeof(b));
        for (int i = 1; i <= n; i++)
        {
            if (b[i - 1] + a[i] > a[i])
                b[i] = b[i - 1] + a[i];
            else
                b[i] = a[i];
        }
        subarr = -100000;
        for (int i = 1; i <= n; i++)
        {
            subarr = max(b[i], subarr);
        }
        for (int i = 2; i <= n; i++)
        {
            if (a[i] > 0)
                f[i] = max(f[i - 1] + a[i], a[i]);
            else
                f[i] = max(f[i - 1], a[i]);
        }
        Subseq = -100000;
        for (int i = 1; i <= n; i++)
        {
            Subseq = max(Subseq, f[i]);
        }
        cout
            << subarr << " " << Subseq << "\n";
    }
}