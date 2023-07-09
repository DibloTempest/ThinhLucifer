#include <bits/stdc++.h>
#define nmax 10000007
using namespace std;
long long n, stt;
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
    for (long long i = 2; i <= nmax; i++)
    {
        if (f[i] == true)
        {
            stt++;
        }
        if (stt == n)
            return cout << i, 0;
    }
}