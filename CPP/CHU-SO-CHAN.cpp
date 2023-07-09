#include <bits/stdc++.h>
using namespace std;
string s;
long long x = 0, i, d = 0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    for (i = 0; i < s.size(); i++)
        if ((s[i] - 48) % 2 == 0)
            d++;
    cout << d;
}
