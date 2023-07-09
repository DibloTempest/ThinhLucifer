#include <bits/stdc++.h>
using namespace std;
long long a, b, n = 0, t = 0;
bool ktra(long long n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
main()
{
    cin >> a >> b;
    n = a + b;
    if (ktra(n))
        cout << 0;
    else
    {
        t = a + b + 1;
        while (ktra(t) != true)
        {
            t++;
        }
        cout << t - n;
    }
}