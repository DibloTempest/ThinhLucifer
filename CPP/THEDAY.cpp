#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("THEDAY.inp", "r", stdin);
    freopen("THEDAY.out", "w", stdout);
    long long d, t, n;
    cin >> d >> t >> n;
    if (t == 2)
    {
        if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
        {
            if (d > 0 && d <= 28)
                d++;
            else if (d == 29)
            {
                d = 1;
                t++;
            }
        }
        else
        {
            if (d > 0 && d <= 27)
                d++;
            else if (d == 28)
            {
                d = 1;
                t++;
            }
        }
    }
    else if (t == 4 || t == 6 || t == 9 || t == 11)
    {
        if (d > 0 && d <= 29)
            d++;
        else if (d == 30)
        {
            d = 1;
            t++;
        }
    }
    else
    {
        if (d > 0 && d <= 30)
            d++;
        else if (d == 31)
        {
            d = 1;
            t++;
        }
    }
    if (t > 12)
    {
        t = 1;
        n++;
    }
    cout << d << " " << t << " " << n;
    return 0;
}
