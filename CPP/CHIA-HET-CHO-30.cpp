#include <bits/stdc++.h>
using namespace std;
long long n, sum;
string s;
bool check(string s)
{
    long long sum = 0;
    for(long long i = 0 ; i < s.size() ; i++)
    {
        sum += s[i] - '0';
    }
    return sum % 3 == 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    sort(s.rbegin(), s.rend());
    if(s[s.size() - 1] == '0')
    {
        if(check(s))
            cout << s;
        else cout << -1;
    }
    else cout << -1;
}