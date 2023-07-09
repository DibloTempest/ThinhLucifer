#include <bits/stdc++.h>
using namespace std;
double a, b, c, d;
main()
{
    cin >> a >> b >> c >> d;
    double TB = (a + b + 2 * c + 3 * d) / 7;
    if (TB >= 8.0)
        cout << "GIOI";
    if (TB < 8 and TB >= 6.5)
        cout << "KHA";
    if (TB < 6.5 and TB >= 5)
        cout << "TRUNG BINH";
    if (TB < 5)
        cout << "YEU";
}