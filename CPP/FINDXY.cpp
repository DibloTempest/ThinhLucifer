#include <bits/stdc++.h>
using namespace std;
long long a, b;
main()
{
    cin >> a >> b;
    long long maxa = -1;
    for (long long i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {

            if (b % i != 0)
                maxa = max(maxa, i);
            if (b % (a / i) != 0)
                maxa = max(maxa, a / i);
        }
    }
    long long mina = 1e18;
    for (long long i = 2; i <= sqrt(b); i++)
    {
        if (b % i == 0)
        {

            if (a % i != 0)
                mina = min(mina, i);
            if (a % (b / i) != 0)
                mina = min(mina, b / i);
        }
    }
    cout << maxa;
    if (mina > 1e12)
        cout << " " << -1;
    else
        cout << " " << mina;
}