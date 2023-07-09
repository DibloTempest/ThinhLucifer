#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("TACHCHU.inp", "r", stdin);
    freopen("TACHCHU.out", "ư", stdout);
    string s;
    getline(cin, s);
    for (int i = 0; i <= s.length() - 2; i++)
        for (int j = i + 1; j <= s.length() - 1; j++)
            if (s[i] >= s[j])
            {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
    int dem = 1;
    for (int i = 0; i <= s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
            dem++;
        else
        {
            dem = 1;
        }
        if (dem == 1)
            cout << i << "\n";
    }

    return 0;
}