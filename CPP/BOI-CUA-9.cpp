#include <bits/stdc++.h>
using namespace std;
long long n = 0;
string s;
int main()
{
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        n = n + s[i] - 48;
    }
    if (n % 9 == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
