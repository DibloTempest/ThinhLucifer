#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long dd, mm, yy;
    cin >> dd >> mm >> yy;
    // if (((dd + 2 * mm + (3 * (mm + 1)) / 5 + yy + (yy / 4)) % 7) == 0)
    //     cout << "Sunday";
    // else if (((dd + 2 * mm + (3 * (mm + 1)) / 5 + yy + (yy / 4)) % 7) == 1)
    //     cout << "Monday";
    // else if (((dd + 2 * mm + (3 * (mm + 1)) / 5 + yy + (yy / 4)) % 7) == 2)
    //     cout << "Tuesday";
    // else if (((dd + 2 * mm + (3 * (mm + 1)) / 5 + yy + (yy / 4)) % 7) == 3)
    //     cout << "Wednesday";
    // else if (((dd + 2 * mm + (3 * (mm + 1)) / 5 + yy + (yy / 4)) % 7) == 4)
    //     cout << "Thursday";
    // else if (((dd + 2 * mm + (3 * (mm + 1)) / 5 + yy + (yy / 4)) % 7) == 5)
    //     cout << "Friday";
    // else if (((dd + 2 * mm + (3 * (mm + 1)) / 5 + yy + (yy / 4)) % 7) == 6)
    //     cout << "Saturday";
    // return 0;
    long long y0 = yy - (14 - mm) / 12;
    long long x = y0 + y0 / 4 - y0 / 100 + y0 / 400;
    int m0 = mm + 12 * ((14 - mm) / 12) - 2;
    long long day = (dd + x + 31 * m0 / 12) % 7;
    if (day == 0)
        cout << "Sunday";
    if (day == 1)
        cout << "Monday";
    else if (day == 2)
        cout << "Tuesday";
    if (day == 3)
        cout << "Wednesday";
    if (day == 4)
        cout << "Thursday";
    if (day == 5)
        cout << "Friday";
    if (day == 6)
        cout << "Saturday";
}