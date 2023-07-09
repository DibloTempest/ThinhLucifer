#include <bits/stdc++.h>
using namespace std;
long long a, ln = -1, b;
bool ktra(long long n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    cin >> a;
    cin >> b;
    for (long long i = 1; i <= sqrt(a); i++)
    {
        a if (a % i == 0)
        {
            if (b % i == 0 and ktra(i))
                ln = max(ln, i);
            if (b % (a / i) == 0 and ktra(a / i))
                ln = max(ln, a / i);
        }
    }
    cout << ln;
}