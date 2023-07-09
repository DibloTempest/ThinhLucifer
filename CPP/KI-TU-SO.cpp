#include <bits/stdc++.h>
using namespace std;
long long d = 0;
string s;
main()
{
    getline(cin, s);
    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] >= '0' and s[i] <= '9')
            d++;
    }
    cout << d;
}