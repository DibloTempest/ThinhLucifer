#include <bits/stdc++.h>
using namespace std;
struct sb
{
    long long gia;
    long long sl;
};
bool cmp(sb x, sb y)
{
    return (x.gia < y.gia);
}
sb s[2000004];
main()
{
    long long a, n, d = 0;
    cin >> a >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> s[i].gia >> s[i].sl;
    }
    sort(s + 1, s + n + 1, cmp);
    for (long long i = 1; i <= n; i++)
    {
        if (a == 0)
        {
            cout << d;
            return 0;
        }
        if (s[i].sl <= a)
        {
            d = d + s[i].sl * s[i].gia;
            a = a - s[i].sl;
        }
        else
        {
            d = d + a * s[i].gia;
            a = 0;
        }
    }
    cout << d;
}