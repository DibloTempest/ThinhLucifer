#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, S1, S2;
    getline(cin, S);
    getline(cin, S1);
    getline(cin, S2);
    size_t pos = S.find(S1);
    while (pos != -1)
    {
        S.replace(pos, S1.length(), S2);
        pos = S.find(S1, pos + S2.length());
    }

    cout << S << endl;

    return 0;
}
