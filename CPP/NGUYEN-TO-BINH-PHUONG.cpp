#include <bits/stdc++.h>
using namespace std;
long long n;
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
    cin >> n;
    long long k = sqrt(n) + 1;
    while (ktra(k) != 1)
        k++;
    cout << k * k;
}