#include <bits/stdc++.h>
using namespace std;
long long a;
main()
{
    cin >> a;
    for (long long i = 1; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            cout << i << " ";
    }
    for (long long i = sqrt(a); i >= 1; i--)
    {
        if (a % i == 0 and i * i != a)
            cout << a / i << " ";
    }
}