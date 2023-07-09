#include <bits/stdc++.h>
using namespace std;
string s;
long long d = 0;
main()
{
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (int(s[i]) >= 'A' and int(s[i]) <= 'Z')
            d++;
    }
    cout << d;
}