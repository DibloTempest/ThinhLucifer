#include <bits/stdc++.h>
using namespace std;
string s, t;
long long k = 0;
int main()
{
    cin >> s >> t;
    if (s.size() == t.size())
    {
        for (long long i = 0; i < s.size(); i++)
            if (s[i] > t[i])
            {
                k++;
                cout << 1;
                return 0;
            }
            else if (s[i] < t[i])
            {
                k++;
                cout << -1;
                return 0;
            }
    }
    else if (s.size() > t.size())
    {
        cout << 1;
        k++;
    }

    else
    {
        cout << -1;
        k++;
    }
    if (k == 0)
        cout << 0;
}