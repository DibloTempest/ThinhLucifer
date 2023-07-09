#include <bits/stdc++.h>
using namespace std;
long long n, t;
long long tt(long long a)
{
    long long s = 0;
    while (a > 0)
    {

        s = s + (a % 10) * (a % 10);
        a = a / 10;
    }
    return s;
}
bool ktra(long long n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
main()
{
    cin >> n;
    t = tt(n);
    if (ktra(t))
        cout << "YES";
    else
        cout << "NO";
}
