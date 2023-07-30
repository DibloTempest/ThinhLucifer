#include <bits/stdc++.h>
using namespace std;
long long t, d;
bool f[10000007];
void prime()
{
    memset(f, true, sizeof(f));
    f[0] = f[1] = false;
    for (int i = 2; i * i <= 10000007; i++)
    {
        if (f[i])
            for (int j = i * i; j <= 10000007; j += i)
                f[j] = false;
    }
}
long long tk1(long long d)
{
    for (long long i = 1 + d; i <= 10000007; i++)
    {
        if (f[i])
            return i;
    }
}
long long tk2(long long d)
{
    for (long long i = tk1(d) + d; i <= 10000007; i++)
    {
        if (f[i])
            return i;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    prime();
    cin >> t;
    while (t--)
    {
        cin >> d;
        cout << min(tk1(d) * tk2(d), tk1(d) * tk1(d) * tk1(d)) << endl;
    }
}