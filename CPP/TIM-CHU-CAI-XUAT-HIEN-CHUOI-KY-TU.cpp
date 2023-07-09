#include <bits/stdc++.h>
using namespace std;
string s;
char ch;
int main()
{
    cin >> s;
    cin >> ch;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ch)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}