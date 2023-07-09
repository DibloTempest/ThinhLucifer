#include <bits/stdc++.h>
using namespace std;
long long d = 0, n;
main()
{
    cin >> n;
    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            d = d + 2;
        if (i * i == n)
            d = d - 1;
    }
    cout << d;
}