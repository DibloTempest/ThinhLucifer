#include <bits/stdc++.h>
#define nmax 10000007
using namespace std;
long long n, t;
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
main()
{
    prime();
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (long long i = n; i >= 1; i--)
        {
            if (n % i == 0 and f[i] == true)
            {
                cout << i << endl;
                break;
            }
        }
    }
}