#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll findsomuln(ll x)
{
    ll somuln = 0;
    ll somuhientai = 0;
    ll tsnt = 2;

    while (x > 1)
    {
        if (x % tsnt == 0)
        {
            x /= tsnt;
            somuhientai++;
            if (somuhientai > somuln)
            {
                somuln = somuhientai;
            }
        }
        else
        {
            tsnt++;
            somuhientai = 0;
        }
    }

    return somuln;
}

int main()
{
    ll a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    ll x = a * b * c;
    ll somuln = findsomuln(x);
    cout << somuln;

    return 0;
}
