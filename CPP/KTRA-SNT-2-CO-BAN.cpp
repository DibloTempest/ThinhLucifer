#include <bits/stdc++.h>
using namespace std;
long long n, s = 0;
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
    cin >> n;
    while (n != 0)
    {
        s += n % 10;
        n /= 10;
    }
    if (ktra(s))
        cout << "YES";
    else
        cout << "NO";
}