#include <bits/stdc++.h>
#define nmax 1000007
using namespace std;
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
    long long n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long count = 0;
        for (int i = 2; i <= nmax; i++)
        {
                if (f[i] == true && f[i + 6] == true)
                {
                    count++;
                    if (count == n)
                    {
                        cout << i << " "
                            << i + 6 << "\n";
                        break;
                    }
                }
        }
    }
}
