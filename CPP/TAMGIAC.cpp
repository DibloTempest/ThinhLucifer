#include <bits/stdc++.h>
using namespace std;
float a, b, c, p = 0;
main()
{
    freopen("TAMGIAC.inp", "r", stdin);
    freopen("TAMGIAC.out", "w", stdout);
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
    if (a + b > c || a + c > b || b + c > a)
    {
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a * a)
        {
            cout << "TAM GIAC VUONG"
                 << " " << setprecision(2) << fixed << s;
        }
        else if (a == b && b == c)
        {
            cout << "TAM GIAC DEU"
                 << " " << setprecision(2) << fixed << s;
        }
        else if (a == b || b == c || c == a)
            cout << "TAM GIAC CAN";
        else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > b * b + a * a)
            cout << "TAM GIAC TU";
        else
            cout << "TAM GIAC NHON";
    }
    else
        cout << "NO";
}