#include <bits/stdc++.h>
#define nmax 10000007
using namespace std;
long long a[nmax], n, d = 0;
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
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (f[a[i]] == true)
        {
            d++;
        }
    }
    cout << d;
}