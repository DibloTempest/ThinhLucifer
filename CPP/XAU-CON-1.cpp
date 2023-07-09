#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, S1;
    getline(cin, S);
    getline(cin, S1);

    int pos = -1;
    int n = S.length();
    int m = S1.length();
    for (int i = 0; i <= n - m; i++)
    {
        bool found = true;
        for (int j = 0; j < m; j++)

            if (S[i + j] != S1[j])
            {
                found = false;
                break;
            }

        if (found)
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
        cout << "NO";
    else
        cout << pos;

    return 0;
}
