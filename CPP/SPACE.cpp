#include <bits/stdc++.h>
using namespace std;
long long dem = 0;
int main()
{
    freopen("SPACE.inp", "r", stdin);
    freopen("SPACE.out", "w", stdout);
    string s;
    getline(cin, s);
    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] == ' ')
        {
            cout << i << " ";
            break;
        }
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            cout << i;
            break;
        }
    }
}