#include <bits/stdc++.h>
using namespace std;
string s;
main()
{
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = s[i] + 1;
    }
    cout << s;
}