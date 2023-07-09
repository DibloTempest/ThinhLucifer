#include <bits/stdc++.h>
using namespace std;
string s;
deque<char> q;
main()
{

    cin >> s;
    long long n = s.length();
    s = ' ' + s;
    if (n % 2 != 0)
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
                q.push_front(s[i]);
            else
                q.push_back(s[i]);
        }
    else
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
                q.push_back(s[i]);
            else
                q.push_front(s[i]);
        }
    for (char c : q)
        cout << c;
}