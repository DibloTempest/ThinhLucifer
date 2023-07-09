#include <bits/stdc++.h>
using namespace std;
long long a, b, d = 0, T;
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
main()
{
    prime();
    d = 0;
    cin >> a >> b;
    for (long long i = a; i <= b; i++)
    {
        if (f[i])
            d = d + 1;
    }
    cout << d << "\n";
}
