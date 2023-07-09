#include <bits/stdc++.h>
using namespace std;
long long n, dem = 0;
bool f[1000007];
void prime()
{
    memset(f, true, sizeof(f));
    f[0] = f[1] = false;
    for (int i = 2; i * i <= 1000007; i++)
    {
        if (f[i])
            for (int j = i * i; j <= 1000007; j += i)
                f[j] = false;
    }
}
int main()
{
    prime();
    cin >> n;
    for (long long i = 2; i <= n - 4; i++)
    {
        if (f[i] and f[i + 4])
            dem++;
    }
    cout << dem;
}