#include <bits/stdc++.h>
#define nmax 10000007
using namespace std;
long long L, R, s = 0;
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
    cin >> L >> R;
    for (long long i = L; i <= R; i++)
    {
        if (f[i] == true)
        {
            cout << i << "\n";
        }
    }
}