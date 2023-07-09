#include <bits/stdc++.h>
#define nmax 10000007
using namespace std;
long long a, b, stt = 0;
bool f[nmax];
void prime()
{
    memset(f, true, sizeof(f));
    f[0] = f[1] = false;
    for (int i = 2; i * i <= nmax; i++)
    {
        if (f[i])
            for (int j = i * i; j <= nmax; j += i)
                f[j] = false;
    }
}
int main()
{
    freopen("MA_B2.inp", "r", stdin);
    freopen("MA_B2.out", "w", stdout);
    prime();
    cin >> a >> b;
    for (long long i = a; i <= b; i++)
    {
        if (f[i] == true)
        {
            cout << f[i] << " \n";
        }
    }
}