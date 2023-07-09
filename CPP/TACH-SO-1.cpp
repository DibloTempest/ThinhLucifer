#include <bits/stdc++.h>
using namespace std;
string s1, s2 = "";
main()
{
    getline(cin, s1);
    for (int i = 0; i <= s1.length(); i++)
    {
        if (s1[i] >= '0' and s1[i] <= '9')
            s2 = s2 + s1[i];
        cout << s2;
    }
}