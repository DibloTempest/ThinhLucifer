#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    char a;
    getline(cin, s);
    cin >> a;
    ll dem = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == a)
            dem++;
    cout << dem;
}