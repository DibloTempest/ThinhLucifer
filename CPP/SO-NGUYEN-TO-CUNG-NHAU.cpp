#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, d = 0;
    cin >> n;
    for (long long i = 1; i < n; i++)
    {
        long long UCLN;
        UCLN = __gcd(n, i);
        if (UCLN == 1)
            d++;
    }
    cout << d;
}