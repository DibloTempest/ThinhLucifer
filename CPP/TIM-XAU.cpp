#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int len1 = s1.length();
    int len2 = s2.length();
    int flag = 0;

    for (int i = 0; i < len1 - len2 + 1; i++)
    {
        int j;
        for (j = 0; j < len2; j++)
        {
            if (s1[i + j] != s2[j])
            {
                break;
            }
        }
        if (j == len2)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
