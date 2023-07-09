#include <bits/stdc++.h>
using namespace std;
long long n, a = 1e9, b = 1e9;
main()
{
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)

        if (n % i == 0 and i + n / i < a + b)
        {
            a = i;
            b = n / i;
        }
    cout << a << " " << b;
}