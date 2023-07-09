#include <bits/stdc++.h>
using namespace std;
bool ktra(long long n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
long long n, d = 0;
main()
{
    cin >> n;
    if (ktra((n % 100) % 10))
        d++;
    if (ktra((n % 100) / 10))
        d++;
    cout << d;
}