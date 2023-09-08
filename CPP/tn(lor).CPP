#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
    }
    int g = y[0];
    for (int i = 1; i < n; i++)
    {
        g = __gcd(g, y[i]);
    }
    int lcm = y[0];
    for (int i = 1; i < n; i++)
    {
        lcm = (lcm * y[i]) / __gcd(lcm, y[i]);
    }

    int day = lcm / g;
    int tg[n];
    for (int i = 0; i < n; i++)
    {
        tg[i] = day / y[i];
    }
    cout << day << endl;
    for (int i = 0; i < n; i++)
    {
        cout << tg[i] << " ";
    }
    cout << endl;
    return 0;
}
