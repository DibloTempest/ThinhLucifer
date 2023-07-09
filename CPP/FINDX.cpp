#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("FINDX.inp", "r", stdin);
    freopen("FINDX.out", "w", stdout);
    char x;
    string s;
    long long count = 0;
    cin >> x;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == x)
        {
            count++;
        }
    }
    cout << count << endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == x)
        {
            cout << i << " ";
        }
    }

    return 0;
}
