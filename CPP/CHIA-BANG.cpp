#include <bits/stdc++.h>
using namespace std;
long long X;
main()
{
    cin >> X;
    if (X >= 3 and X <= 5)
        cout << "A";
    else if (X >= 6 and X <= 9)
        cout << "B";
    else if (X >= 10 and X <= 12)
        cout << "C";
    else
        cout << 0;
}