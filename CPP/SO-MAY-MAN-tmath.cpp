#include <bits/stdc++.h>
using namespace std;
string s;
long long sle = 0, sch = 0;
int main()
{
    cin >> s;
    s = ' ' + s;
    for (int i = 1; i < s.size(); i++)
    {
        if (i % 2 == 1 and s[i] % 2 == 1)
            sle = sle + s[i] - '0';
        if (i % 2 == 0 and s[i] % 2 == 0)
            sch = sch + s[i] - '0';
    }
    if (sle == sch and s.size() - 1 >= 4)
        cout << "YES";
    else
        cout << "NO";
}
