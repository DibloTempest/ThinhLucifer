#include <bits/stdc++.h>
using namespace std;
long long n, a[10000004];
long long tt(long long n)
{
    long long tong = 0;

    while (n > 0)
    {
        long long tachdc = n % 10;
        tong += tachdc;
        n /= 10;
    }

    return tong;
}
long long tong_uoc(long long n)
{
    long long sum = 0;
    long long s = sqrt(n);
    for (long long i = 1; i < sqrt(n); i++)
        if (n % i == 0)
            sum += i + n / i;
    if (s * s == n)
        return sum + s;
    else
        return sum;
}
int main()
{
    freopen("BHHAO.inp", "r", stdin);
    freopen("BHHAO.out", "w", stdout);
    long long d = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (tt(a[i]) == (tong_uoc(tt(a[i])) - tt(a[i])))
            d++;
    }
    cout << d;
}