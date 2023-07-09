#include <bits/stdc++.h>
using namespace std;
string s;
main()
{
    freopen("ASTRING.inp", "r", stdin);
    freopen("ASTRING.out", "w", stdout);
    getline(cin, s);
    int i = s.size();
    for (int i = s.size() - 1; i >= 0; i--)
        cout << s[i];
}