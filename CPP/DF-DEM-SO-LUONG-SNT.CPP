#include <bits/stdc++.h>
#define nmax 1000004
using namespace std;
long long t, l, r, d = 0;
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
    prime();
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        for (long long i = l; i <= r; i++)
        {
            if (f[i] == true)
            {
                d++;
            }
        }
        cout << d << " \n";
        d = 0;
    }
}