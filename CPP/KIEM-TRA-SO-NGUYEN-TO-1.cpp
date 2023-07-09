#include <bits/stdc++.h>
using namespace std;
long long n, t;
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
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (ktra(n))
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
}