#include <bits/stdc++.h>
using namespace std;
int a[8], d = 0;
string s;
int main()
{
    a['I'] = 1;
    a['V'] = 5;
    a['X'] = 10;
    a['L'] = 50;
    a['C'] = 100;
    a['D'] = 500;
    a['M'] = 1000;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (a[s[i]] >= a[s[i + 1]])
            d = d + a[s[i]];
        else
            d = d - a[s[i]];
    }
    cout << d;
}