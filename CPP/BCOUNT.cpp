#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("BCOUNT.inp", "r", stdin);
    freopen("BCOUNT.out", "w", stdout);
    string s;
    int count[10] = {0};
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            count[s[i] - '0']++;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << count[i] << " ";
    }
    return 0;
}