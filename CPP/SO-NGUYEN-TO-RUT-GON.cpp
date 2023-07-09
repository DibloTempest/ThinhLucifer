#include <bits/stdc++.h>
using namespace std;
long long n, sum;
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
    long long i = 2;
    while (n != 1)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            sum += i;
        }
        i++;
    }
    cout << sum;
}