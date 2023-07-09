#include <bits/stdc++.h>
using namespace std;
string s;
long long d = 0;
main()
{
    freopen("WORDS.inp", "r", stdin);
    freopen("WORDS.out", "w", stdout);
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
            d++;
    }
    cout << d + 1 << "\n";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
        if (s[i] == ' ')
            cout << "\n";
    }
}