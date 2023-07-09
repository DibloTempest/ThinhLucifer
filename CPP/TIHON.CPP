#include <bits/stdc++.h>
using namespace std;
long long n, a[10000000], d = 0;
bool ktra(long long n)
{
    long long s = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            s = s + i;
        if (i * i == n)
            s = s - i;
    }
    if (n < s)
        return true;
    else
        return false;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (ktra(a[i]))
            d++;
    }
    cout << d;
}