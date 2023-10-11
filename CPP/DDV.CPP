#include<bits/stdc++.h>
using namespace std;
long double cd, cc, kc;
string s;
int main()
{
    freopen("DVV.inp", "r", stdin);
    freopen("DVV.out", "w", stdout);
    cin >> s;
    for(long long i = 0; i < s.size(); i++)
    {
        if(s[i] == 'E') cd++;
        if(s[i] == 'N') cc++;
        if(s[i] == 'W') cd--;
        if(s[i] == 'S') cc--;
    }
    cd = abs(cd);
    cc = abs(cc);
    kc = cd * cd + cc * cc;
    cout << fixed << setprecision(2) << sqrt(kc);
}
