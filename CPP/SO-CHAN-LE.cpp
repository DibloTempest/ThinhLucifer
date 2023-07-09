#include <bits/stdc++.h>
using namespace std;
long long a, b;
{
    cin >> a >> b;
    if (a % 2 == 0 and b % 2 == 0 or a % 2 != 0 and b % 2 != 0)
        cout << "1";
    else
        cout << "0";
}