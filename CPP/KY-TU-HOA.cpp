#include <bits/stdc++.h>
using namespace std;
string s;
main()
{
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (int(s[i]) >= 'a' and int(s[i]) <= 'z')
            s[i] = s[i] - 32;
    }
    cout << s;
}