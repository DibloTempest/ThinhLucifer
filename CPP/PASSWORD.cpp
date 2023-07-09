#include <bits/stdc++.h>
using namespace std;
string s;
long long so = 0, chu = 0, sai = 0;
int main()
{
    getline(cin, s);
    for (long long i = 0; i < s.size(); i++)
    {
        if (((int)s[i] >= 'a' and (int) s[i] <= 'z') || ((int)s[i] >= 'A' and (int) s[i] <= 'Z'))
            chu++;
        else if (int(s[i]) >= '0' and int(s[i] <= '9'))
            so++;
        else
            sai++;
    }
    if (s.size() < 5 || so == 0 || chu == 0 || sai > 0)
        cout << "Error!";
    else
        cout << s.size();
}
