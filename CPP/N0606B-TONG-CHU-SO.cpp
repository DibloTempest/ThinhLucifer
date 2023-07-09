#include <bits/stdc++.h>
using namespace std;
string s;
long long x = 0, i;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    for (i = 0; i < s.size(); i++)
        x = x + s[i] - 48;
    cout << x;
}
