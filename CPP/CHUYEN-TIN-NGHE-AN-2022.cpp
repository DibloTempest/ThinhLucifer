#include <bits/stdc++.h>
using namespace std;
long long n, k, t;
long long g(long long n, long long k)
{
    long long res = 0;
    while (n > 0)
    {
        res += n / k;
        n = n / k;
    }
    return res;
}
void file()
{
    if (fopen("SOMU.INP", "r"))
    {
        freopen("SOMU.INP", "r", stdin);
        freopen("SOMU.OUT", "w", stdout);
    }
}
int main()
{
    file();
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << g(n, k) << endl;
    }
}