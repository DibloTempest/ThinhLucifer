#include <bits/stdc++.h>
using namespace std;
string s;
long long k = -1e9;
int main()
{
    cin >> s;
    for (long long i = 0; i < s.size(); i++)
    {
        if (k < s[i] - 48)
            k = s[i] - 48;
    }
    cout << k;
}