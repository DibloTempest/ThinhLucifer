#include <bits/stdc++.h>
using namespace std;
long long n,m=-1e9;
string s,z;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> z;
        s+=' ' + z;
    }
    for (int i = 0; i <s.size(); i++)
    {
        long long dem=1;
        while(s[i]==s[i+1])
        {
            dem++;
            i++;
        }

        m=max(m,dem);
    }
        cout<<m;
}

