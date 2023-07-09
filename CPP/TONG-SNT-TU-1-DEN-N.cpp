#include <bits/stdc++.h>
using namespace std;
long long n, stt = 0;
bool ktra(long long n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    freopen("TONGNGTO.inp", "w", stdin);
    freopen("TONGNGTO.out", "r", stdout);
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (ktra(i))
            stt = stt + i;
    }
    cout << stt;
}