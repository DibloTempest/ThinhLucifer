#include <bits/stdc++.h>
using namespace std;
long long d = 0, k;
string s;
main()
{
    cin >> s >> k;
    for (int i = 0; i < s.size(); i++)
    {
        if (int(s[i]) >= 'a' and int(s[i]) <= 'z')
            d++;
    }
    if (d > k)
    {
        for (int i = 0; i < 2; i++)
            cout << s[i];
    }
    if (d <= k)
        for (int i = s.size() - 1; i >= 0; i--)
            cout << s[i];
}