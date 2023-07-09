#include <bits/stdc++.h>
using namespace std;
string s;
main()
{
    cin >> s;
    for (auto x : s)
    {
        if (x == '.')
            break;
        cout << x;
    }
}