#include <bits/stdc++.h>
using namespace std;
long long a, d = 0;
bool ktra(long long n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
main()
{
    cin >> a;
    for (long long i = 1; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            if (ktra(i))
                d++;
            if (ktra(a / i) and i != a / i)
                d++;
        }
    }
    cout << d;
}