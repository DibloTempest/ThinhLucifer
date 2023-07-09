#include <bits/stdc++.h>
using namespace std;
long long n, a[10000004];
long long tt(long long n)
{
    long long s = 0;
    while (n > 0)
    {
        s = s + n % 10;
        n = n / 10;
    }
}
bool check(long long n)
{
    long long sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        return true;
    return false;
}
int main()
{
    freopen("BHHAO.inp", "w", stdin);
    freopen("BHHAO.out", "r", stdout);
    long long d = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (check(tt(a[i])))
            d++;
    }
    cout << d;
}