#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a, dem = 0, tmp;
    for (int i = 0; i < s.size() - 1; i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            if (s[i] > s[j])
            {
                tmp = s[i];
                s[j] = tmp;
            }
        }
    }
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] != s[i + 1])
            dem++;
    }
    cout << dem + 1;

    return 0;
}