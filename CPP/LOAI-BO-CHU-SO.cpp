#include <bits/stdc++.h>
using namespace std;
long long d = 0;
string s;
main()
{
    getline(cin, s);
    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z' or s[i] >= 'A' and s[i] <= 'Z')
            cout << s[i];
    }
}